#include <iostream>
#include <string>
using namespace std;

//g++ append.cpp -o append && ./append


int main() {
 
    //cola uma string na outra

    //destino += origem; pode se usar tbm

    string texto2="texto1";

    texto2+="oi";

    std::cout << texto2 << std::endl;
    return 0;

    
    string texto = "Olá";

    texto.append(" Mundo");

    cout << texto;
}