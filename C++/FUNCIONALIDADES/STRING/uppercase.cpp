#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string texto = "gabriel";

    for (char &c : texto) {
        c = toupper(c);
    }
  

    //saida GABRIEL
    cout << texto;
 
    return 0;
}