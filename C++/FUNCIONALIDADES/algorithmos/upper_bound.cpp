#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ upper_bound.cpp -o upper_bound && ./upper_bound

int main() {
    
    vector<int> v = {1, 3, 3, 5, 7};

    auto it = upper_bound(v.begin(), v.end(), 3);

    cout << *it;

    return 0;
}