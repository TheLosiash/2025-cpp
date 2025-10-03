#include <iostream>

int main(int argc, char** argv) 
{
    int N; 
    int A; 
    int B;
    scanf_s("%d", &N);
    scanf_s("%d", &A);
    scanf_s("%d", &B);
    printf("Mass of sulfide: %d", 2*N*A*B);
    return 0;
}