#include <cstdio>
#include <string.h>

int const N = 1024;

void palin(char s[], int n);

int main(int argc, char** argv)
{
    if (palin == 0)
    {
        printf("error");
    }
    else
    {
        char s[N] = { 0 };
        int n = 0;
        for (int i = 0; i < N - 1; ++i)
        {
            scanf_s("%c", &s[i]);
            if (s[i] == '\n')
            {
                s[i] = '\0';
                break;
            }
            ++n;
        }
        palin(s, n);
        return 0;
    }
}

void palin(char s[], int n)
{
    int t = 0;
    for (int i = 0, j = n - 1; i < j; ++i, --j)
    {
        if (s[i] != s[j])
        {
            t = 1;
            printf("No");
            break;
        }
    }
    if (t == 0)
    {
        printf("Yes");
    }
    return;
}