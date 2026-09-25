#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ find_if.cpp -o find_if && ./find_if
//finaiza quando a primeira condição é atendida ...

int main() {
    vector<int> v = {1, 3, 5, 8, 10};

    auto it = find_if(v.begin(), v.end(),
                      [](int x) {
                          return x % 2 == 0;
                      });

    if (it != v.end())
        cout << *it;
}