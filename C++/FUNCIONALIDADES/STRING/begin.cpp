#include <iostream>
#include <string>
using namespace std;

//g++ begin.cpp -o begin && ./begin

int main() {

    //pega o primeiro caractere de uma string, porem, pega como um ponteiro, prestar atenção no que precisa pegar para usalo
    string texto = "Casa";
   
    auto it = texto.begin();


    std::cout << *it << std::endl;
}