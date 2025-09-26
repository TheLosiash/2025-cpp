#include <iostream>
#include <fstream>

int main() {
    std::ifstream input("INPUT.TXT");
    std::ofstream output("OUTPUT.TXT");

    long long N;
    input >> N;

    long long max_kings = ((N+1) / 2) * ((N+1) / 2);

    output << max_kings << std::endl;

    input.close();
    output.close();
    return 0;
}