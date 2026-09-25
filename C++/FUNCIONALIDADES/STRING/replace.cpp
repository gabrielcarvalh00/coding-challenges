#include <iostream>
#include <string>
using namespace std;

//g++ replace.cpp -o replace && ./replace

int main() {
    //(x,y, 'cadeia)
 
     //a partir do simbolo s, quero apgar a quantide y, e quero adidcionar a nova cadeia

    string texto = "Casa";

    texto.replace(0, 2, "Me");

    cout << texto;
}