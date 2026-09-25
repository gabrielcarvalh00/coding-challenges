#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ empty.cpp -o empty && ./empty

//verificar se o array estar vazio
int main() {
    
    vector<int> v;


     if (v.empty())
     {std::cout << "esta vazio" << std::endl;
    return 0;
        
     }
    std::cout << "nao ta vazio" << std::endl;

    return 0;
}