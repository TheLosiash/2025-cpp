#include <iostream>

int main(int argc,char** argv) 
{
    int A;
    scanf_s("%d", &A);
    printf("The next number for the number %d is %d. The previous number for the number %d is %d", A, A+1, A, A-1);
    return 0;
}