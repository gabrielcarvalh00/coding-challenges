#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;


//g++ LetPalindroma.cpp -o LetPalindroma && ./LetPalindroma


int main() {

    string palavra="baa";
    string reversa="baa";
    string eraseaux;
    int getindice;
    int existe=0;
     
    palavra=s;

    reversa=palavra;
    eraseaux=palavra;

    reverse(reversa.begin(), reversa.end());
  
    if(palavra==reversa){
        //std::cout << "caiu" << std::endl;
        return -1;
    }
 
     reversa.clear();
 
 string aux;
   
   //aaab
   int i;
    for (i = 0; i < palavra.length(); i++)
    {
                
            eraseaux.erase(i,1);//aaab virou aab
            aux=eraseaux; //aux=aab
           
            reverse(eraseaux.begin(), eraseaux.end()); //erase vira baa
           
            if(eraseaux==aux){ //aab==baa
              getindice=i;
               std::cout << i << std::endl;              
              //std::cout << eraseaux << std::endl;
              //std::cout << aux << std::endl;
              return getindice;
            }
             
            //std::cout << eraseaux << std::endl;
            eraseaux=palavra; //eraseaux=aaab
            aux.clear();

            

           // return 0;
    }

 //   std::cout << existe << std::endl;


    return 0;
}

