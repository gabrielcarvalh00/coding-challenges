#include <iostream>
#include <string>
#include <vector>
using namespace std;


//g++ find_first_of.cpp -o find_first_of && ./find_first_of

int main() {


    string texto = "computador";

    int pos = texto.find_first_of("aeiou");

    cout << texto[pos];


    return 0;
}