#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

//g++ index.cpp -o index && ./index


int main() {
    string s="SOSSOSSOS";
    string response;
    int count=0;
      

    for (int i = 0; i < s.size(); i++)
    { 
        response.push_back('S');
        i++;
        response.push_back('O');
        i++;
        response.push_back('S');
        
    }


for (int i = 0; i < s.size(); i++)
    { 
        if(s[i]!=response[i]){
            count++;
        }
        
    }


 std::cout << count << std::endl;

 return count;
}