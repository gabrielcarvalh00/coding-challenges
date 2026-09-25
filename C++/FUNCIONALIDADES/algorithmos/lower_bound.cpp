#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//g++ lower_bound.cpp -o lower_bound && ./lower_bound
//retorna o primeiro elemento maior ou igual


int main() {
    vector<int> v = {1, 3, 3, 5, 7};

    auto it = lower_bound(v.begin(), v.end(), 3);

    cout << *it;
}