#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;


//g++ insert.cpp -o insert && ./insert


int main() {
    

    vector<int> v = {10, 20, 30};

   // v.insert(v.end(), 15);
     //v.insert(v.begin(), 15);

     for(auto var : v)
     {
        std::cout << var << std::endl;
     }


    return 0;
}