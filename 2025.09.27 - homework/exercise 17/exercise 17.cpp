#include <iostream>


int main(int argc,char** argv) 
{
    int N;
    scanf_s("%d", &N);
    printf("The second number is %d", N % 100 / 10);
    return 0;
}