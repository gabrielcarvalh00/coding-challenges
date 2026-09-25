#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ rsize.cpp -o rsize && ./rsize
//cria um novo array de tamanho diferente
//tambem aceita dois argumentos, um é a quantidade de novos caracyeres, e o outro é esse caractere que vc uqer

int main() {
    
    vector<int> v = {1, 2, 3};

    v.resize(5);
    


    for(auto var : v)
    { std::cout << var << std::endl;
        
    }
    return 0;
}