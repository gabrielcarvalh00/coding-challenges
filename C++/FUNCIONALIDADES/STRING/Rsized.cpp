#include <iostream>
#include <string>
using namespace std;



//g++ Rsized.cpp -o Rsized && ./Rsized

//ela defini um novo tamanho para strimg, se o novo tamanho for menor que o antigo, ela deescartatr o resto, se for maior, temnos que dizer qual carcatere vai ocupar as posicaos novas p
int main() {

    string texto = "Computador";
    string texto2 = "casa";

    //texto2.resize(6, '!');
    
    texto.resize(4);

    cout << texto;

   // std::cout << texto2 << std::endl;
}