#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    ifstream input("input.txt");
    std::ofstream output("output.txt");
    int X;
    int Y;
    input >> X >> Y;
    if (X > Y) {
        output <<"Vova";
        printf("Vova is winner!");
    }
    if (X == Y) {
        output << "Draw";
        printf("The draw!");
    }
    if (X < Y) {
        output << "Anton";
        printf("Anton is winner!");
    }
    input.close();
    output.close();
    return 0;
}