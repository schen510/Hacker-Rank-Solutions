#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void printEvenIndex(string str){
   int i = 0;
   for (auto it = str.begin(), end = str.end(); it != end; ++it, ++i)
   {
     if(i % 2 == 0){
       cout << *it; 
     }
   }
   cout << " ";
}

void printOddIndex(string str){
   int i = 0;
   for (auto it = str.begin(), end = str.end(); it != end; ++it, ++i)
   {
     if(i % 2 == 1){
       cout << *it;
     }
   }
   cout << endl;
}

int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   int size; 
   string word;
  
   cin >> size;
 
   for(int i = 0; i < size; ++i){
     cin >> word;
     printEvenIndex(word);
     printOddIndex(word);
   }

  
   return 0;
}

