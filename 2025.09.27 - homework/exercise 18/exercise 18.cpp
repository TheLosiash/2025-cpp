#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    int N;
    int R;
    input >> N;
    R = (N % 10) + (N % 100 / 10) + (N / 100);
    output << R;
    input.close();
    output.close();
    printf("The sum of numbers is %d", R);
    return 0;
}