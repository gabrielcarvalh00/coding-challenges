#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ pop_back.cpp -o pop_back && ./pop_back
//sempre que ber pop ou push, lemberar de pilha que sempre adiciokna e remove no final do vetor

int main() {
    
    vector<int> v = {10, 20, 30};

    v.pop_back();

  for(auto var : v)
  {
    std::cout << var << std::endl;
  }

  
    return 0;
}