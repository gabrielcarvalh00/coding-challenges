#include <iostream>
#include <string>
using namespace std;

//g++ push_back.cpp -o push_back && ./push_back

int main() {
  
   //adiciona um ultimo caractere no final de uma strig, a diferença principal do append que aqui adicionaum unico catacre, lembrese que tem que estar entre aspas simples

    string texto = "Cas";

    texto.push_back('a');

    cout << texto;
}