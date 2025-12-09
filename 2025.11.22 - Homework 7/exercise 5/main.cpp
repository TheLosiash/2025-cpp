#include <cstdio>
#include <string.h>

int const N = 1024;

void FirstSum(char s[]);

int main(int argc, char** argv)
{
    if (FirstSum == 0)
    {
        printf("error");
    }
    else
    {
        char s[N] = { 0 };
        for (int i = 0; i < N - 1; ++i)
        {
            scanf_s("%c", &s[i]);
            if (s[i] == '.')
            {
                s[i + 1] = '\0';
                break;
            }
        }
        FirstSum(s);
        return 0;
    }
}

void FirstSum(char s[])
{
    int n = 0;
    for (int i = 0; i < N; ++i)
    {
        if (s[i] == ' ')
        {
            ++n;
        }
        if (s[i] == '\n')
        {
            ++n;
            break;
        }
    }
    printf("%d", n);
    return;
}