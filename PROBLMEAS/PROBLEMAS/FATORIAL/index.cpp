#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;


//g++ index.cpp -o index && ./index

int main() {
 
   int n=7;
   int res=0;




   for (size_t i = n; i > 1 ; i--)
   {
      res=n*(i-1);//
      n=res;//need update the value that is multiplied
   }


   std::cout << res << std::endl;
    
return 0;
}