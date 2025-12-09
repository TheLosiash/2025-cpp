#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string.h>

int const N = 1024;

int main(int argc, char** argv)
{
    char s[N] = { 0 };
    int n = 0;
    for (int i = 0; i < N - 1; ++i)
     {
        scanf_s("%c", &s[i]);
        ++n;
        if (s[i] == '\n')
        {
            s[i] = '\0';
            break;
        }
     }
    char lw[N] = "";
    char cw[N] = "";
    int ml = 0;
    int ci = 0;
    int y = 0;
    for (int i = 0; i <= n; ++i)
    {
        if (s[i] != ' ' && s[i] != '\0')
        {
            cw[ci] = s[i];
            ++ci;
            cw[ci] = '\0';
            ++y;
        }
        else
        {
            if (y > 0)
            {
                if (y > ml)
                {
                    ml = y;
                    strcpy(lw, cw);
                }
                y = 0;
                cw[0] = '\0';
                ci = 0;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%c", lw[i]);
    }
    printf("\n%d", ml);
    return 0;   
}
    