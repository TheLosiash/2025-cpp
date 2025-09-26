#include <fstream>
#include <cmath>  

using namespace std;

int main() {
    ifstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");

    long long a;
    long long b;
    fin >> a >> b;

    long long r = a % b;

    if (r < 0) {
        r += llabs(b);
    }

    fout << r << "\n";
    fin.close();
    fout.close();
    return 0;
}