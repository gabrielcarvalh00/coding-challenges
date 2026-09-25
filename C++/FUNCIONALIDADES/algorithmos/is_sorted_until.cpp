#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ is_sorted_until.cpp -o is_sorted_until && ./is_sorted_until
//verifica se dos conjuntos possuem o mesmo elemento, indepente da ordem

int main() {
    vector<int> v = {1, 2, 3, 7, 5, 6};

    auto it = is_sorted_until(v.begin(), v.end());

    cout << *it;
}