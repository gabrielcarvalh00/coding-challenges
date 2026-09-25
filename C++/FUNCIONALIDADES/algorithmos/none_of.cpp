#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ all_of.cpp -o all_of && ./all_of
//retorbna verdadeiro se nenhum condição for atentica, caso contratrio , retorna falso
int main() {
    vector<int> numeros = {1, 3, 5, 7};

    bool resultado = none_of(numeros.begin(), numeros.end(),
                             [](int x) {
                                 return x % 2 == 0;
                             });

    cout << resultado;
}