#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    int N; 
    int A; 
    int B;
    input >> N >> A >> B;
    output << 2*N*A*B;
    input.close();
    output.close();
    printf("Mass of sulfide: %d", 2*N*A*B);
    return 0;
}