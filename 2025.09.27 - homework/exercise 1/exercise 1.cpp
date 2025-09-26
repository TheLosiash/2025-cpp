#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    int a;
    int b;
    input >> a >> b;
    output << a + b;
    input.close();
    output.close();
    printf("Numbers: %d and %d ", a, b);
    printf("Sum: %d", a + b);
    return 0;
}