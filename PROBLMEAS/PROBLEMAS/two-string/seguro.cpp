#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ index.cpp -o index && ./index

int main() {
    
     string s1="hi";
     string s2="world";
     bool flag=true;// start with true with si smaller

     int indice=0;
 
     indice=s1.size();// start with sq than is smaller

     if(s1.size()>s2.size()){ // chang if the s2 is minor
           indice=s2.size();
           flag=false; // s2 is smaller
     }
     
      if(flag==true){
            for (size_t i = 0; i < indice; i++)
            {
                for (size_t j = 0; j < indice; j++)
                {    
                if (s1[j]==s2[i]){
                std::cout <<"YES"  << std::endl;
                   string res="YES";
                    return res;
                    //return res;

                }
                {
                    
                }
                }
            }
      }
      else{
         for (size_t i = 0; i < indice; i++)
            {
                for (size_t j = 0; j < indice; j++)
                {    
                if (s2[j]==s1[i]){
                     std::cout <<"YES"  << std::endl;
                     string res="YES";
                     return res;
                     //return res;

                }
                {
                    
                }
                }
            }
        
      }
        


string res="NOT";

std::cout << "NOT" << std::endl;


    return res;
}