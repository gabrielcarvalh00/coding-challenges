#include <iostream>
#include <string>
using namespace std;

//g++ pop_back.cpp -o pop_back && ./pop_back

int main() {
    //apaga o ultimo caractere de uma string;
    string texto = "Casa";

    texto.pop_back();

    cout << texto;
}