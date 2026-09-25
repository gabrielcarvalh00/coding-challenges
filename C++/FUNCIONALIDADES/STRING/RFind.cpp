#include <iostream>
#include <string>
using namespace std;

//g++ RFind.cpp -o RFind && ./RFind


int main() {
   
    //verificar a ultima ocorrencia de uma caracyere em uma cadeia

    string texto = "banana";

    cout << texto.rfind("a");
}