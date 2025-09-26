#include <iostream>
#include <fstream>

int main() {
    std::ifstream inFile("input.txt");
    int A;
    inFile >> A;
    inFile.close();
    std::ofstream outFile("output.txt");
    outFile << "The next number for the number " << A << " is " << A + 1 << ". The previous number for the number " << A << " is " << A - 1 << ".";
    outFile.close();
    printf("The next number for the number %d is %d. The previous number for the number %d is %d", A, A + 1, A, A-1);
    return 0;
}