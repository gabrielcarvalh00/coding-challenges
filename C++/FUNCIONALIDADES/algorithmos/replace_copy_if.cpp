#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ replace_copy_if.cpp -o replace_copy_if && ./replace_copy_if
// croa um novo array, com aquelees eçemento que atende uma condição especifica;
//aqui, se o numero for par, troca ele por zero, no novo array;

int main() {
    vector<int> origem = {1, 2, 3, 4, 5};
    vector<int> destino(5);

    replace_copy_if(origem.begin(), origem.end(),
                    destino.begin(),
                    [](int x) {
                        return x % 2 == 0;
                    },
                    0);

    for (int x : destino)
        cout << x << " ";
}