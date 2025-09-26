#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    int C;
    int A;
    int B;
    input >> C >> A >> B;
    output << A + B + C;
    input.close();
    output.close();
    printf("The sum is %d", A+B+C);
    return 0;
}