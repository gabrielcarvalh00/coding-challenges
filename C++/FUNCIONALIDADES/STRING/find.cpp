#include <iostream>
#include <string>
using namespace std;

//g++ find.cpp -o find && ./find

//pode retornar tyanto o indice do caractere, como se ele foi encontrado ou nao
int main() {
      string teste="putador";
    //verificar se uma substring estar contindo em uma string, e retorna o indice primeiro caracvtere onde começa essa substring
    string texto = "Computador";

    size_t pos = texto.find(teste[0]);  

//para encontrado
if (!(pos == string::npos)) {
     std::cout << "encontrado" << std::endl;
     return 0;
}

//para nao encomntrado
if ((pos == string::npos)) {
     std::cout << " nao encontrado" << std::endl;
     return 0;
}


}