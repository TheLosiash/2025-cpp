#include <iostream>

int main(int argc, char** argv) 
{
    int N;
    scanf_s("%d", &N);
    int R = (N % 10) + (N % 100 / 10) + (N / 100);
    printf("The sum of numbers is %d", R);
    return 0;
}