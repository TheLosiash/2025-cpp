#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    int a;
    input >> a;
    output << a+1;
    input.close();
    output.close();
    printf("Number of colours : %d", a );
    printf(" Number of useful beads : %d", a+1 );
    return 0;
}