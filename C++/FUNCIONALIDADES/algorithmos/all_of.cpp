#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ all_of.cpp -o all_of && ./all_of

//verifica se todos os elementos atende a uma donição especrficia;

int main() {
    vector<int> numeros = {2, 4, 6, 8};

    bool resultado = all_of(numeros.begin(), numeros.end(),
                            [](int x) {
                                return x % 2 == 0;
                            });

    cout << resultado;

    return 0;
}