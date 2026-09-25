#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ push_back.cpp -o push_back && ./push_back
//adiciona um elemeento no final do vetor

int main() {

    vector<int> v = {10, 20};

    v.push_back(30);

   for(auto var : v)
   {
    std::cout << var << std::endl;
   }

    return 0;
}