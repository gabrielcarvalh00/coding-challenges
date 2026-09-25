#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;


//g++ compareSubstrin.cpp -o compareSubstrin && ./compareSubstrin

int main() {
 
 string cadeia="abab";
 string subcadeia="ab";
 int quant=0;


  for (size_t i = 0; i < cadeia.size(); i++)
  {
     if (cadeia.substr(i, subcadeia.size()) == subcadeia.substr(0, subcadeia.size())) {
        quant++;
    }
  }

  std::cout << quant << std::endl;

  return 0;

}