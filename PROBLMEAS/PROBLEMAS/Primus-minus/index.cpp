#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;


//g++ index.cpp -o index && ./index


int main() {
    
 vector<int> arr;
 double sizearray;
 double posi=0,neg=0,zero=0;

 arr = {-4, 3, -9, 0, 4, 1};
  
 sizearray=arr.size();

  for (size_t i = 0; i < arr.size(); i++)
  {
    if(arr[i]>0){
        posi++;
    }
     if (arr[i]<0){
        neg++;
    }
    if(arr[i]==0){
        zero++;
    }
    
  }

  cout << fixed << setprecision(6) << posi/sizearray << std::endl;
  cout << fixed << setprecision(6) << neg/sizearray << std::endl;
  cout << fixed << setprecision(6) << zero/sizearray << std::endl;




    return 0;
}