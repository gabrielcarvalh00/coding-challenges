#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ swap_ranges.cpp -o swap_ranges && ./swap_ranges

int main() {
    
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};

    swap_ranges(a.begin(), a.end(), b.begin());

     for(auto var : a){
        std::cout << var;
    }

     std::cout << " " << std::endl;

    for(auto var : b){
        std::cout << var ;
    }

    return 0;
}