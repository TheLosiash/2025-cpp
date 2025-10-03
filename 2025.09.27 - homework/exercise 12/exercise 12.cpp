#include <iostream>


int main(int argc, char** argv) 
{
    long long N;
    scanf_s("%lld", &N);
    long long M = ((N+1) / 2) * ((N+1) / 2);
    printf("Number of kings is %lld", M);
    return 0;
}