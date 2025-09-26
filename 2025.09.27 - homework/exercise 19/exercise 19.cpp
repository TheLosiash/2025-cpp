#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    int N;
    int R;
    input >> N;
    R = (N + 9) / 10;
    output << R;
    input.close();
    output.close();
    printf("Number of luidors is %d", R);
    return 0;
}