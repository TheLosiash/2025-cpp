#include <iostream>
int const SIZE = 1000;

int main(int argc, char** argv)
{
    int w[SIZE] = { 0 };
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int k = 0;
    scanf_s("%d %d %d %d %d", &n, &a, &b, &c, &d);
    for (int i = 0; i < n; ++i)
    {
        w[i] = i + 1;
    }
    for (int i = a - 1, j = b - 1; i < j; ++i, --j)
    {
        k = w[i];
        w[i] = w[j];
        w[j] = k;
    }
    for (int i = c - 1, j = d - 1; i < j; ++i, --j)
    {
        k = w[i];
        w[i] = w[j];
        w[j] = k;
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", w[i]);
    }
    return 0;
}