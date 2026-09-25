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
     bool flag=true;// start with true with s1 smaller than s2

     int indice=0;
 
     indice=s1.size();// start with sq than is smaller

     if(s1.size()>s2.size()){ // chang if the s2 is minor
           indice=s2.size();
           flag=false; // s2 is smaller
     }
     
      if(flag==true){
           for(auto var : s1)
           {
                size_t pos = s2.find(var); 

                //para encontrado
                if (!(pos == string::npos)) {
                std::cout << "encotrado" << std::endl;
                string res="YES";
                return res;
               // return 0;
}
           }
      }
      else{
        for(auto var : s2)
           {
                size_t pos = s1.find(var); 

                //para encontrado
                if (!(pos == string::npos)) {
                std::cout << "encontrado" << std::endl;
                string res="YES";
               // return 0;
                return res;
           }
        
      }
        
}

string res="NO";

std::cout << "nao encotrado" << std::endl;

return res;

//return 0;

}