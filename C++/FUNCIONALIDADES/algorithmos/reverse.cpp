#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ reverse.cpp -o reverse && ./reverse
//iverte a ordem dos elemtnos de um array


int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    reverse(v.begin(), v.end());

    for (int x : v)
        cout << x << " ";
}