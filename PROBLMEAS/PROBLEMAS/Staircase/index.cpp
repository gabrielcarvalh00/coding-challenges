#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ index.cpp -o index && ./index


int main() {

    int n=4;
    vector<int> auxsize;

    int i;
     int auxn;

     auxn=n;

    for (i = 1; i <= n ; i++)
    {  
         
        for (int j = auxn; j > 0 ; j--)
       { 
        std::cout <<" ";
       }
       
         for (int j = 0; j < i; j++)
       { 
         std::cout << "#";
       }

       
       
     std::cout << "" << std::endl;
          auxn--;
    }    

    return 0;
}