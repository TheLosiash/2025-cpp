#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    int C;
    int D;
    int K;
    int N;
    input >> K >> N;
    C = (N - 1) / K + 1;
    D = (N - 1) % K + 1;
    output << C << " " << D;
    input.close();
    output.close();
    printf("The number of page is %d. The number of line is %d", C, D);
    return 0;
}