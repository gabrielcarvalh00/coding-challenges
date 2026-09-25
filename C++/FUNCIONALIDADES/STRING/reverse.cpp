#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//g++ reverse.cpp -o reverse && ./reverse

int main() {

// inverte uma palavra, se cair palavr palindrom ja sabe:)


    string texto = "Casa";

    reverse(texto.begin(), texto.end());

    cout << texto;
}