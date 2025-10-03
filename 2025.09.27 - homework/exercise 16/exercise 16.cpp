#include <iostream>


int main(int argc, char** argv) 
{
    int N;
    scanf_s("%d", &N);
    printf("The last number is %d", N % 10);
    return 0;
}