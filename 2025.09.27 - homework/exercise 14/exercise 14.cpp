#include <iostream>

int main(int argc, char** argv) 
{
    int K;
    int N;
    scanf_s("%d", &K);
    scanf_s("%d", &N);
    int C = (N - 1) / K + 1;
    int D = (N - 1) % K + 1;
    printf("The number of page is %d. The number of line is %d", C, D);
    return 0;
}