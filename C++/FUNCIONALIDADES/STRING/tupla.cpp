#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ tupla.cpp -o tupla && ./tupla

int main() {
    

    vector<pair<char, char>> vetor;

    vetor.push_back({'a', 'b'});
    vetor.push_back({'c', 'd'});

   for (size_t i = 0; i < vetor.size(); i++)
   {
    cout << vetor[i].first << " " << vetor[i].second<<endl;
    
   }

    return 0;
}
