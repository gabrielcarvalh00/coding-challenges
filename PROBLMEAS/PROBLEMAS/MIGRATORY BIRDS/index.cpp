#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;


//g++ index.cpp -o index && ./index
//1, 4, 4, 4, 5, 3

int main() {
  int cont=0;
  int auxcont=0;
  int variavelfinal=0;

 vector<int> arr;
  vector<int> resul;

 arr={1, 2, 3, 4, 5, 4, 3, 2, 1, 3, 4};

 sort(arr.begin(), arr.end());

 
 //1, 4, 4, 4, 5, 3

for (size_t i = 0; i < arr.size()-1; i++)
{ 
    
    if(arr[i]==arr[i+1]){
        
      
        auxcont++;
        if(cont<auxcont){
            //resul.push_back(arr[i]);
            cont=auxcont;

        }
          //auxcont++;
         else if(cont==auxcont){
            resul.push_back(arr[i]);
            cont=auxcont;
            
        };
        //std::cout << "caiu" << std::endl;
    }
    if(arr[i]!=arr[i+1]){         
            auxcont=0;
    }
}



if(!resul.empty()){
    for (size_t i = 0; i < resul.size()-1; i++){
    if(resul[i]!=resul[i+1]){
        resul.erase(resul.begin() + i);
    }
    
}

}

if(cont>resul.size()){
    std::cout << cont+1 << std::endl;
    std::cout << "caiu" << std::endl;
    return 0;
}

auto it = min_element(resul.begin(), resul.end());
cout << *it;
std::cout << "caiu" << std::endl;


return 0;
}