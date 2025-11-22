#include <cstdio>
#include <string.h>

int const N = 1024;

bool Compare(char s[], char t[]);

int main(int argc, char** argv)
{
    if (Compare == 0)
    {
        printf("error");
    }
    else
    {
        char s[N] = { 0 };
        char t[N] = { 0 };
        for (int i = 0; i < N - 1; ++i)
        {
            scanf_s("%c", &s[i]);
            if (s[i] == '\n')
            {
                s[i] = '\0';
                break;
            }
        }
        for (int i = 0; i < N - 1; ++i)
        {
            scanf_s("%c", &t[i]);
            if (t[i] == '\n')
            {
                t[i] = '\0';
                break;
            }
        }
        if (Compare(s, t))
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
        return 0;
    }
}

bool Compare(char s[], char t[])
{
    for (int i = 0; i < N; ++i)
    {
        if (s[i] != t[i])
        {
            return false; 
        }
        if (s[i] == '\0') 
        {
            break;
        }
    }
    return true; 
}