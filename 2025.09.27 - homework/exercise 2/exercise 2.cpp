#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    int a;
    input >> a;
    output << a;
    input.close();
    output.close();
    printf("Number: %d", a);
    return 0;
}