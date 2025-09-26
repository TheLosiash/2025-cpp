#include <iostream>
#include <fstream>

int main() {
    std::ifstream input("INPUT.TXT");
    std::ofstream output("OUTPUT.TXT");

    long long N;
    long long K;
    input >> N >> K;

    
    long long apples_per_student = K / N; 
    long long remaining_apples = K % N;   

    
    long long unhappy_students = (K % N == 0) ? 0 : N - (K % N); 

   
    output << apples_per_student << " " << remaining_apples << " " << unhappy_students << std::endl;

    input.close();
    output.close();

    return 0;
}