#include <iostream>  

int main(int argc, char** argv) 
{
    long long a = 0;
    scanf_s("%lld", &a);
    long long b = 0;
    scanf_s("%lld", &b);
    int r = 0;
    r = a % b;
    r = r + (r < 0) * ((b > 0) ? b : -b);
    printf("%d", r);
    return 0;
}