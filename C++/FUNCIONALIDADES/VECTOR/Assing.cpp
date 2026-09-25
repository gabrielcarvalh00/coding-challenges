#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ Assing.cpp -o Assing && ./Assing

//substituir o vetor pelo elemento inddicado
//vai usar dois indices, (x,y)  x é a quantidade de elementos que deseja colocar, e y é esse elemento
//ex(2,10) o novo vetor vai ter dois elementos 10
//o antigo é perdido

int main() {
    vector<int> v = {1, 2, 3};

    v.assign(1, 10);

 for (size_t i = 0; i < v.size(); i++)
 {
    std::cout << v[i]<< std::endl;  
 }
 
        return 0;
}