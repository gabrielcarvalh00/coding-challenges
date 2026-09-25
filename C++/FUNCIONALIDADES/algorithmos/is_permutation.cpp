#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//g++ is_permutation.cpp -o is_permutation && ./is_permutation
//verifica se dos conjuntos possuem o mesmo elemento, indepente da ordem

int main() {

    vector<int> a = {1, 2, 3};
    vector<int> b = {3, 1, 2};

    cout << is_permutation(a.begin(), a.end(), b.begin());

}