#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//g++ replace_copy.cpp -o replace_copy && ./replace_copy
// cria um novo array substituiondo x por y, e mantenho todo o resto

int main() {
    vector<int> origem = {1, 2, 2, 3};
    vector<int> destino(4);

    replace_copy(origem.begin(), origem.end(),
                 destino.begin(), 2, 9);

    for (int x : destino)
        cout << x << " ";
}