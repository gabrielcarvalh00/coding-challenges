#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ size.cpp -o size && ./size
//apenas  retorna o tamanho do array;
int main() {
    
    vector<int> v = {10, 20, 30};

    cout << v.size();

    return 0;
}