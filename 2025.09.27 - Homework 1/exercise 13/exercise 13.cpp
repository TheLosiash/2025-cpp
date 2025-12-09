#include <iostream>

int main(int argc, char** argv) 
{
    int a = 0;
    scanf_s("%d", &a);
    int b = 0;
    scanf_s("%d", &b);
    printf("%d", (a - 1) * (b - 1) + 1);
    return 0;
}