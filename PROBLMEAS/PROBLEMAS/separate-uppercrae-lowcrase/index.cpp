#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//gabriel
//a i e
//g b r l

//g++ index.cpp -o index && ./index


int main() {

    string word="gabriel";
    string consoante;
    string vogal;

    for (size_t i = 0; i < word.size(); i++)
    {
        if(word[i]=='A' || word[i]=='a' || word[i]=='E' || word[i]=='e' || word[i]=='I' ||word[i]=='i' || word[i]=='O' || word[i]=='o' ||word[i]=='U' || word[i]=='u'){
            vogal.push_back(word[i]);
        }
        else
        {
            consoante.push_back(word[i]);
        }

    }

    for(auto var : vogal)
    {
        std::cout << var;
        
    }
    
std::cout << "" << std::endl;

    for(auto var : consoante)
    {
        std::cout << var;
    }


    
    return 0;
}