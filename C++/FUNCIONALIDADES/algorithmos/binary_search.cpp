#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ binary_search.cpp -o binary_search && ./binary_search
//verifica se um determinado numero existe dentro de um array, caso exista ele retorna bool, caso nao exista, ele retorna falso
//exisge que a entrada esteja ordenada

int main() {
    vector<int> numeros = {1, 3, 5, 7, 9};

    bool encontrado = binary_search(numeros.begin(), numeros.end(), 5);

    cout << encontrado;
}