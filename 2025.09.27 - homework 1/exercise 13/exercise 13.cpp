#include <iostream>

int main(int argc, char** argv) 
{
    int C;
    int A;
    int B;
    scanf_s("%d",&A);
    scanf_s("%d", &B);
    C = (A-1)*(B-1)+1;
    printf("The number of cheese parts is %d", C);
    return 0;
}