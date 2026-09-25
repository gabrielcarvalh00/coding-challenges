#include <iostream>
#include <string>
using namespace std;


//g++ compare.cpp -o compare && ./compare


int main() {
    string a = "Casa";
    string b = "Casa";

    if(a==b){
        std::cout << "iguais" << std::endl;
        return 0;
    }

    //std::cout << "diferentes" << std::endl;

     //veja como pode comparar parcialmente o conteudo de  uma substring com outra substring 
  //  if (a.substr(0, 3) == b.substr(0, 3)) {
    //cout << "Iguais";
//}
}