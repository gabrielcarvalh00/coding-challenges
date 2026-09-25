#include <iostream>
#include <string>
using namespace std;

//g++ insert.cpp -o insert && ./insert


int main() {
    //Ele empurra os caracteres existentes para a frente e coloca o novo texto na posição indicada.

    string texto = "Csa";

    texto.insert(1, "a");

    cout << texto;
}