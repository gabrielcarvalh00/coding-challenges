#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ Rbegin.cpp -o Rbegin && ./Rbegin
//ideal para percorrer de tras pra frente
//aqui tbm entra o uso do rend();

int main() {
   
vector<int> v = {10, 20, 30};

for(auto it = v.rbegin(); it != v.rend(); it++)
{
    cout << *it << " ";
}


    return 0;
}