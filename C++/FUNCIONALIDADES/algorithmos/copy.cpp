#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//g++ copy.cpp -o copy && ./copy

int main() {
    vector<int> origem = {1, 2, 3};
    vector<int> destino(3);

    copy(origem.begin(), origem.end(), destino.begin());

    for (int x : destino)
        cout << x << " ";
}