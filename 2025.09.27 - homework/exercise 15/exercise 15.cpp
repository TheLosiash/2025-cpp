#include <iostream>
#include <fstream>
#include <string>

using namespace std;

long long squareEndingWith5(long long n) {
    long long prefix = n / 10;
    long long product = prefix * (prefix + 1);
    string result_str = to_string(product) + "25";
    return stoll(result_str);
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    long long number;
    fin >> number;

    long long square = squareEndingWith5(number);

    fout << square << endl;

    fin.close();
    fout.close();

    return 0;
}