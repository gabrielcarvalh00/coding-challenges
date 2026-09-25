#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ count.cpp -o count && ./count

int main() {
    vector<int> numeros = {1, 2, 3, 2, 4, 2};

    cout << count(numeros.begin(), numeros.end(), 2);
}