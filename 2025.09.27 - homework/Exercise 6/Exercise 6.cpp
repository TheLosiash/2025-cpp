#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    int a;
    int b;
    input >> a >> b;
    output << b-1 << " " << a - 1;
    input.close();
    output.close();
    printf("Harry do not shot %d cans. Larry do not shot %d cans.", b - 1, a - 1);
    return 0;
}