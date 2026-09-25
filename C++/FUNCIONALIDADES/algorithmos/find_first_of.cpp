#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ find_first_of.cpp -o find_first_of && ./find_first_of
//Ele retorna o primeiro elemento do primeiro intervalo que também existe no segundo intervalo.
int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {8, 4, 9};

    auto it = find_first_of(a.begin(), a.end(), b.begin(), b.end());

    if (it != a.end())
        cout << *it;
}k