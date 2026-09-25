#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ find_if_not.cpp -o find_if_not && ./find_if_not
//retorna o primeiro elemento que nao satisfaz uam condição
int main() {
    vector<int> v = {2, 4, 6, 7, 8};

    auto it = find_if_not(v.begin(), v.end(),
                          [](int x) {
                              return x % 2 == 0;
                          });

    if (it != v.end())
        cout << *it;
}