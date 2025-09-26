#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    ifstream input("input.txt");
    std::ofstream output("output.txt");
    int K;
    input >> K;
    output << (K-1)*5;
    printf("The lesson ends %d minutes early", (K-1)*5);
    input.close();
    output.close();
    return 0;
}