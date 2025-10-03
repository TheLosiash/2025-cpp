#include <iostream>

int main(int argc, char** argv)
{
    int K;
    scanf_s("%d", &K);
    printf("The lesson ends %d minutes early", (K-1)*5);
    return 0;
}