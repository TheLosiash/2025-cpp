#include <fstream>
using namespace std;

int main(int argc, char** argv) 
{
    int a, b, c, d; 
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    c = a * b % 109; 
    d = (c + 109) % 109 + 1; 
    printf("%d", d);
    return 0;
}