#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ index.cpp -o index && ./index

int conta(bool flag, int need){
    if(flag==true){
        need++;
    }
    return need;
}


int main() {
  
    string password="Ab1";

    string numbers="0123456789";
    string lower_case="abcdefghijklmnopqrstuvwxyz";
    string upper_case="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters="!@#$%^&*()-+";
    
    int need=0;
    //int n=6;
    bool flag=true;
    int res=0;

   for (size_t i = 0; i < numbers.length(); i++){
        
    size_t pos = password.find(numbers[i]);  
     
    //get if exist, therofe, not is necessary make nothing
    if (!(pos == string::npos)) {
        flag=false;
        break;
    }
}

//not exist, is necessary need++
if(flag==true){
      need++;
      //std::cout << "cai" << std::endl;
   // std::cout << res << std::endl;
}

flag=true;

for (size_t i = 0; i < lower_case.length(); i++){
        
    size_t pos = password.find(lower_case[i]);  
     
    //get if exist, therofe, not is necessary make nothing
    if (!(pos == string::npos)) {
        flag=false;
        break;
    }
}

//not exist, is necessary need++
if(flag==true){ 
      need++;
    //std::cout << res << std::endl;
}

flag=true;

for (size_t i = 0; i < upper_case.length(); i++){
        
    size_t pos = password.find(upper_case[i]);  
     
    //get if exist, therofe, not is necessary make nothing
    if (!(pos == string::npos)) {
        flag=false;
        break;
    }
}

//not exist, is necessary need++
if(flag==true){ 
   // std::cout << "caiu" << std::endl;
     need++;
      //std::cout << need << std::endl;
    //std::cout << res << std::endl;
}

flag=true;

for (size_t i = 0; i < special_characters.length(); i++){
        
    size_t pos = password.find(special_characters[i]);  
     
    //get if exist, therofe, not is necessary make nothing
    if (!(pos == string::npos)) {
        flag=false;
        break;
    }
}

//not exist, is necessary need++
if(flag==true){ 
     //std::cout << "caiu" << std::endl;
      need++;
      //std::cout << need << std::endl;
    //std::cout << res << std::endl;
}


int fixsize=0;


if(password.size()+need<6){
    fixsize=6-(password.size()+need);    
      
  
    need=need+fixsize;
     std::cout << need<< std::endl;
     return need;


     

std::cout << need << std::endl;


    


    return need;
}