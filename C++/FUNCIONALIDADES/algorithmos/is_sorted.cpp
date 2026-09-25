#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ is_sorted.cpp -o is_sorted && ./is_sorted
//verifica se dos conjuntos possuem o mesmo elemento, indepente da ordem


int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    cout << is_sorted(v.begin(), v.end());
}