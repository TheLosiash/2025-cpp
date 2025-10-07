#include <iostream>

int main(int argc, char** argv) 
{
    int n = 0;
    scanf_s("%d", &n);
    int r = 0;
    r = (n % 10) + (n % 100 / 10) + (n / 100);
    printf("%d", r);
    return 0;
}