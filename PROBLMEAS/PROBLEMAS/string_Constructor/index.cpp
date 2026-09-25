#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;


//g++ index.cpp -o index && ./index

int main() {
    
    string word="abab";
    string auxword;
    int cont=0;
    int debug=0;
    int i;

    word=s;

    for ( i = 0; i < word.length(); i++)
    {  
     
       auxword.push_back(word[i]);  
       word.erase(i,1); 
      

       if(word.empty()){
        //std::cout << auxword << std::endl;
        //return 0;
        break;
       } 

      for (size_t j = 0; j < auxword.length(); j++)
      {
         if(auxword[j]==word[0]){
             word.erase(0,1); 
            j=-1;
            
        }
      }
 i=-1;
}

std::cout << auxword.size() << std::endl;


    return auxword.size();
}