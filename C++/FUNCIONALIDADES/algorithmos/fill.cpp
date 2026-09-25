#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//g++ fill.cpp -o fill && ./fill
//prenche vetor com determinada posição, da pra escolher onde quer colocar  
//é tipo um insert, so que com o insert, os valores sao deslcoados para a frente
int main() {
    vector<int> v(5);

    fill(v.begin(), v.end(), 10);

    for (int x : v)
        cout << x << " ";
}