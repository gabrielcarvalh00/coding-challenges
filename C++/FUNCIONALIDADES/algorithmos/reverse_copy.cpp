#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ reverse_copy.cpp -o reverse_copy && ./reverse_copy
//iverte a ordem dos elemtnos de um array, so que aqui, cria um novo array

int main() {
    vector<int> origem = {1, 2, 3, 4};
    vector<int> destino(4);

    reverse_copy(origem.begin(), origem.end(), destino.begin());

    for (int x : destino)
        cout << x << " ";
}