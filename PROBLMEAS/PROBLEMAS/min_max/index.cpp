#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ index.cpp -o index && ./index

int main() {

    vector<int> arr={1,2,3,4,5};
    long long max=0;
    long long min=0;
    

    sort(arr.begin(), arr.end());
     
     for (size_t i = 0; i < arr.size()-1; i++)
     {
        max+=arr[i];
     }


       for (int i = arr.size()-1; i > 0; i--)
       {

        min+=arr[i];
        
       }


    
     std::cout << max << " " << min << std::endl;
    
    
    return 0;
}