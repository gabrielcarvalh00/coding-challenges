#include <iostream>
#include <string>
using namespace std;

//g++ substr.cpp -o substr && ./substr

int main() {

    //(x,y) x é a posicao onde irei começar e y é quantos caracteros eu quero caputar a partir dali

    string texto = "computador";

    string parte = texto.substr(0, 4);
    
    cout << parte;
}