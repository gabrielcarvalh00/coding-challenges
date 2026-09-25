#include <iostream>
#include <string>
using namespace std;


//g++ swap.cpp -o swap && ./swap


int main() {
    //troca uma string por outra

    string a = "Casa";
    string b = "Carro";

    a.swap(b);

    cout << a << endl;
    cout << b;
}