#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ begin.cpp -o begin && ./begin

//retorna o primeiro elemento do vetor

int main() {

    vector<int> v = {10, 20, 30};

    cout << *v.begin();
    
    return 0;

}