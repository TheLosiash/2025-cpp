#include <iostream>

int main(int argc, char** argv)
{
    int p = 0; 
    int n = 0;
    int m = 0;
    int c = 0;
    m = 1;
    c = 1;
    scanf_s("%d", &p);
    while (scanf_s("%d", &n) == 1 && n != 0)
    {
        if (n == p)
        {
            if (++c > m)
            {
                m = c;
            }
        }
        else
        {
            c = 1;
            p = n;
        }
    }
    printf("%d", m);
    return 0;
}