#include <iostream>
#include <string>
using namespace std;

//g++ find_first_not_of.cpp -o find_first_not_of && ./find_first_not_of

int main() {

//os primeiros catracteres bate ate quando?
    string texto = "123abc";

    cout << texto.find_first_not_of("0123456789");
}