#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;


//g++ index.cpp -o index && ./index

int main() {
    
    string word="scfg";
    string auxword;
    int cont=0;
    int debug=0;
    int i;

    //word=s;

    for ( i = 0; i < word.length(); i++)
    {  
     


       auxword.push_back(word[i]);  
       word.erase(i,1); 

       if(word.empty()){
        //std::cout << auxword << std::endl;
        //return 0;
        break;
       }

      
       

    if (word.substr(0, auxword.size()) == auxword.substr(0, auxword.size())) {  
           
            std::cout << auxword << std::endl;
          
            word.erase(0,auxword.size());
                        //std::cout << "caiu" << std::endl;
                    //return 0;        
    }
 i=-1;
}

std::cout << auxword.size() << std::endl;


    return 0;
}