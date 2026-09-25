#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//g++ adjacent_find.cpp -o adjacent_find && ./adjacent_find

//retorna o primeiro numero repetido dentro de um array
//retorna end qunado nao encontra nada

int main() {
    vector<int> numeros = {1, 2, 3, 3, 4};

    auto it = adjacent_find(numeros.begin(), numeros.end());

    if (it != numeros.end()){
        cout << *it;
    }
        

}