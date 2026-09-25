#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ includes.cpp -o includes && ./includes
//verifica retorna true ou verfdadeiro caso esteja contido

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 4};

    cout << includes(a.begin(), a.end(), b.begin(), b.end());
}