#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ count_if.cpp -o count_if && ./count_if
//contabiliza quantas vzs a condição retorna true, e armaena;
int main() {
    vector<int> numeros = {1, 2, 3, 4, 5, 6};

    int qtd = count_if(numeros.begin(), numeros.end(),
                       [](int x) {
                           return x % 2 == 0;
                       });

    cout << qtd;
}