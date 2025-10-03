#include <iostream>


int main(int argc, char** argv) 
{
    int a;
    int b;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    printf("%d", (a % b == 0 || b % a == 0) ? 1 : 666);
    return 0;
}