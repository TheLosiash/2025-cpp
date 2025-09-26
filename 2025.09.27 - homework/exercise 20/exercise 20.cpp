#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    int A;
    int B;
    input >> A >> B;
    if (A % B == 0 or B % A == 0)
    {
        output << 1;
        printf("1");
    }
    else {
        output << 666;
        printf("666");
    }
        
    input.close();
    output.close();
    return 0;
}