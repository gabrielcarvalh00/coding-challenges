#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 2, 22};
    unordered_set<int> s;

    for (int x : v) {
        if (s.count(x)) {
            cout << "Repetido: " << x;
            break;
        }
        s.insert(x);
    }

    return 0;
}