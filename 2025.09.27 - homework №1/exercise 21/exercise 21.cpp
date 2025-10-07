#include <iostream>

int main(int argc, char** argv) 
{
    long long n = 0;
    scanf_s("%lld", &n);
    long long k = 0;
    scanf_s("%lld", &k);
    long long a = 0;
    a = k / n;
    long long r = 0;
    r = k % n;
    long long u = 0;
    u = (k % n == 0) ? 0 : n - (k % n);
    printf("%lld %lld %lld", a, r, u);
    return 0;
}