#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv)
{
    ifstream input("input.txt");
    std::ofstream output("output.txt");
    int M;
    int T;
    input >> M >> T;
    output << "Ivan";
    printf("Ivan is a winner!");
    input.close();
    output.close();
    return 0;
}