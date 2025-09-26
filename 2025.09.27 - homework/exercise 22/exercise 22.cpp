#include <fstream>
using namespace std;

int main(int argc, char** argv) 
{
    ifstream fin("INPUT.TXT");
    ofstream fout("OUTPUT.TXT");

    int V, T;
    fin >> V >> T;

    int road_length = 109;
    long long position = (1LL + V * T - 1) % road_length;

    if (position < 0) {
        position += road_length;
    }
    fout << position + 1 << "\n";

    fin.close();
    fout.close();
    return 0;
}