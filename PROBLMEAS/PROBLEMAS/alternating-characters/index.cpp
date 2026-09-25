#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ index.cpp -o index && ./index

int main() {
    
    string s="AB";
    int cont=0;
    int i;
    int debug=0;

//AAAA
//AAA
//AA
if(s.size()==1){
    std::cout << "foi zero" << std::endl;
    return 0;
}

if(s.size()==2){
   if(s[0]==s[1]){
    s.erase(0,1);
      std::cout << s.size() << std::endl;
    return 1;
  
   }
    std::cout << s.size() << std::endl;
   return 0;
    
}
    for (i = 0; i < s.size()-1; i++)
    {
        
        if(s[i]==s[i+1]){
            //debug++;
           s.erase(i, 1);
           cont++;
           i=-1;
           continue;
           /*
           if(debug==2){
            for(auto var : s){
                std::cout << var;
            }
            return 0;

           }*/
           
        }
        // std::cout << s[i];
    }



    std::cout << cont;



    return cont;
}