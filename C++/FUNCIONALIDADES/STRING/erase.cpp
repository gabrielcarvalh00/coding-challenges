#include <iostream>
#include <string>
using namespace std;

//g++ erase.cpp -o erase && ./erase
//apaga caracteres de uma string

int main() {
   
  //(x,y) a partir da x posição, quero apagar y quantidades
    string texto = "Computador";

    texto.erase(0, 1);

    cout << texto;
}
