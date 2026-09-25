#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//g++ unique.cpp -o unique && ./unique
//retira todos os elementos repetidos

int main() {
    vector<int> v = {1, 2, 2, 3, 3, 3, 4};

    v.erase(unique(v.begin(), v.end()), v.end());

    for (int x : v)
        cout << x << " ";
}