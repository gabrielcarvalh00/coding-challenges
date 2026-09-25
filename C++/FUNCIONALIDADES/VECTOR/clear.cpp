#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ clear.cpp -o clear && ./clear

//limpar o vetor do array;

int main() {
    
    vector<int> v = {1, 2, 3};

    v.clear();
    
    for(auto var : v)
    {
         std::cout <<  var << std::endl;
    }
    
    return 0;
}