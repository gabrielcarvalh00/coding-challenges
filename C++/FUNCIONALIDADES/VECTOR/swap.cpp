#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ swap.cpp -o swap && ./swap
//troca o conteudo entre dois vetores

int main() {
    
    vector<int> a = {1, 2};
    vector<int> b = {3, 4};



    //a.swap(b);
    //swap(v[0], v[2]); caso queira troca indicies especficiso

   for(auto var : b)
   {
    std::cout << var << std::endl;
   }


    return 0;
}