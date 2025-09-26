#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    int N;
    input >> N;
    output << N % 100 / 10;
    input.close();
    output.close();
    printf("The last number is %d", N % 100 / 10);
    return 0;
}