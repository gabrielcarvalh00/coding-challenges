#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ all_of.cpp -o all_of && ./all_of

//verifica se ao menos um, atente a condição, 

int main() {
    vector<int> numeros = {1, 3, 5, 8};

    bool resultado = any_of(numeros.begin(), numeros.end(),
                            [](int x) {
                                return x % 2 == 0;
                            });

    cout << resultado;
}