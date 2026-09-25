#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ max_element.cpp -o max_element && ./max_element
//retorna um interador para o maior elemento do array
//para usar o menor valor, pasa substituir o max por min

int main() {
    vector<int> v = {5, 2, 9, 1, 7};

    auto it = max_element(v.begin(), v.end());

    cout << *it;
}
