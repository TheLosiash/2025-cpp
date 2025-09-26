#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    int C;
    int A;
    int B;
    input >> A >> B;
    C = (A-1)*(B-1)+1;
    output << C;
    input.close();
    output.close();
    printf("The number of cheese parts is %d", C);
    return 0;
}