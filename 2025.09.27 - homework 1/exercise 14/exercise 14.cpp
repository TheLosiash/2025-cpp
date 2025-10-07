#include <iostream>

int main(int argc, char** argv) 
{
    int k = 0;
    scanf_s("%d", &k);
    int n = 0;
    scanf_s("%d", &n);
    printf("%d %d", (n - 1) / k + 1, (n - 1) % k + 1);
    return 0;
}