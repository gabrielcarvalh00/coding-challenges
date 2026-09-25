#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ search.cpp -o search && ./search
//procurau um conjutno dentro do outro, caso esse cdconjunto haja, ele retorna um interador, para o primeiro elemento, no caso do nosso exemplo foi o 3

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> alvo = {3, 4};

    auto it = search(v.begin(), v.end(),
                     alvo.begin(), alvo.end());

    if (it != v.end())
        cout << *it;
}