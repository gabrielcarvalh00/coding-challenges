#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ erase.cpp -o erase && ./erase

// apagar elemtnos de um array, pode ser combinados com varias coisas
//begin, end e etc

int main() {
    
    vector<int> v = {10, 20, 30};

    v.erase(v.begin() + 1);
    //v.erase(v.end());


    for(auto var : v)
    {
        std::cout << var << std::endl;
    }

    return 0;
}