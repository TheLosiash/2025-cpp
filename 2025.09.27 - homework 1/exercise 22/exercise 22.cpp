#include <iostream>

int main(int argc, char** argv) 
{
    int a = 0;  
    scanf_s("%d", &a);
    int b = 0;
    scanf_s("%d", &b);
    int c = 0;
    c = a * b % 109;
    int d = 0;
    d = (c + 109) % 109 + 1; 
    printf("%d", d);
    return 0;
}