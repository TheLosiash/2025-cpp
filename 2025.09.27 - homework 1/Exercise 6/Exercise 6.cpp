#include <iostream>


int main(int argc, char** argv) 
{
    int a;
    int b;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    printf("Harry do not shot %d cans. Larry do not shot %d cans.", b - 1, a - 1);
    return 0;
}