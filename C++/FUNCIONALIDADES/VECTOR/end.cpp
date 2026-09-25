#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ end.cpp -o end && ./end


int main() {

    vector<int> v = {10, 20, 30};

    cout << *(v.end() - 1);



    return 0;
}