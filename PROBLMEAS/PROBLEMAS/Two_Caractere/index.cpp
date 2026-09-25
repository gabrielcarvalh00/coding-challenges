#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <set>
using namespace std;

//g++ index.cpp -o index && ./index

bool verfica(string s){

    string v;
    string v2;
    bool flag=false;

    v[0]=s[0];
    v2[0]=s[1];
 
    for (size_t i = 0; i < s.size()-1; i++)
    {
         if((s[i]!=v[0] &&  s[i]!=v2[0]) || s.size()<2){//validacao se so tem dois caractere mesmo e tamanho 
            //std::cout << "aqui" << std::endl;
            return false;
        }

        if(s[i]==s[i+1]){// validacao se estao alternando
           //  std::cout << "aqui" << std::endl;
            return false;
        }
    }

    //std::cout << "aui" << std::endl;
   return true;
    
}

int main() {
    
    string s = "asdcbsdcagfsdbgdfanfghbsfdab";
    string auxunique;
    string auxsrecom;
    string auxsrecom2;
    char auxerase;
    bool flag=false;
    int biggest=0;

    
    set<char> unico(s.begin(), s.end());
    

    for(char c : unico) {
            auxunique.push_back(c);
    }
  
    

    auxsrecom2=s;

    for (size_t i = 0; i < auxunique.size(); i++)
    {   
        s=auxsrecom2;
        s.erase(remove(s.begin(), s.end(), auxunique[i]), s.end());
        auxsrecom=s;
       // std::cout << s << std::endl;
        flag=verfica(s);
       
    for (size_t j = i+1; j < auxunique.size(); j++){ 
        
         flag=verfica(s);
                   
         s=auxsrecom;
     
           if(!s.empty()){
             s.erase(remove(s.begin(), s.end(), auxunique[j]), s.end());
        }
           flag=verfica(s);

         // if(i==2){
          if(flag==true){
            if(s.size()>biggest && s.size()>=2){
                biggest=s.size();
                std::cout << s << std::endl;
            }
            //std::cout << s << std::endl;
            //std::cout << biggest << std::endl;
          }
                 
    }
  
    }

  std::cout << biggest << std::endl;

return biggest;

}


    
