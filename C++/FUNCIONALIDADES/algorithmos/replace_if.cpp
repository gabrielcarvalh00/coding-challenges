#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ replace_if.cpp -o replace_if && ./replace_if
//verifica se um determinado numero existe dentro de um array, caso exista ele retorna bool, caso nao exista, ele retorna falso
//exisge que a entrada esteja ordenada


int main() {
    
    vector<int> v = {1, 2, 3, 4, 5};

replace_if(v.begin(), v.end(),
           [](int x) {
               return x % 2 == 0;
           },
           0);

    return 0;
}