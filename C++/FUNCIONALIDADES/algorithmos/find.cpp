#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ find.cpp -o find && ./find
//retorna para o primeiro elemento retornado

int main() {

    vector<int> v = {10, 20, 30, 40};

auto it = find(v.begin(), v.end(), 30);

if (it != v.end())
    cout << *it;


}