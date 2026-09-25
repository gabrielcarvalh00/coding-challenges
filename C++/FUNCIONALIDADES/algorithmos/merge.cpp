#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//g++ merge.cpp -o merge && ./merge
//uni dois arrays, faz o merge

int main() {
    vector<int> a = {1, 3, 5};
    vector<int> b = {2, 4, 6};
    vector<int> c(6);

    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());

    for (int x : c)
        cout << x << " ";
}