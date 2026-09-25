#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ sort.cpp -o sort && ./sort

int main() {
    
    vector<int> v = {5, 2, 8, 1, 3};

    sort(v.begin(), v.end());

    for(auto var : v)
    {
        std::cout << var << std::endl;
    }

    return 0;
}

