#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ Back.cpp -o Back && ./Back

//retorna o ultimo elemtno do array, mas apenas printando, nao altera o elemento do array
//pode acesssar substituir o ultimo elemento v.back()=100;


int main() {
    
    vector<int> v = {10, 20, 30};

    cout << v.back();

    return 0;
}