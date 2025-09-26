#include <iostream>
#include <fstream>

int main(int argc, char** argv) 
{
    std::ofstream outFile("output.txt");
    outFile << "Hello world!";
    outFile.close();
    printf("Hello world!");
    return 0;
}