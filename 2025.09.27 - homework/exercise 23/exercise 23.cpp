#include <iostream>  
#include <cmath>

int main(int argc, char** argv) 
{

    long long a;
    long long b;
    scanf_s("%lld", &a);
    scanf_s("%lld", &b);
    int r = a % b;
    r = r + (r < 0) * ((b > 0) ? b : -b);
    printf("%d", r);
    return 0;
}