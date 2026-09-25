#include <iostream>
#include <string>
using namespace std;


//g++ empty.cpp -o empty && ./empty

int main() {

    string texto = "";

    //texto.clear();


    if (texto.empty()) {
        cout << "a string estar vazia";
        return 0;
    }

    std::cout << "  string possui conteudo" << std::endl;
}