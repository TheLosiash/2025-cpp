#include <iostream>

int main(int argc, char** argv)
{
    int n = 0;
    n = -1;
    int m = 0;  
    int c = 0;  
    do
    {
        if (n > m) 
        {
            c = m;
            m = n;
        }
    }
    while (scanf_s("%d", &n) == 1 && n != 0);
    printf("%d", c);
    return 0;
}