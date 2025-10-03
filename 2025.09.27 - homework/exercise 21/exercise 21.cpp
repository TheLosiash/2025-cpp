#include <iostream>

int main(int argc, char** argv) 
{
    long long N;
    long long K;
    scanf_s("%lld", &N);
    scanf_s("%lld", &K);
    long long aps = K / N; 
    long long rap = K % N;   
    long long uhs = (K % N == 0) ? 0 : N - (K % N);
    printf("Number of apples per student %lld. Number of remaining apples is %lld. Number of unhappy students is %lld", aps, rap, uhs);
    return 0;
}