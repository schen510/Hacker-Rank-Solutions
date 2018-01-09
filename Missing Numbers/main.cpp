#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   int num = 0, index;
   int lowest = 200000, maximum = 1;
   int arr1[200000] = {0}, arr2[200000]={0};
  
   cin >> num;
   for(int i = 0; i < num; ++i){
     cin >> index;
     arr1[index-1] += 1;
     if(index < lowest){
       lowest = index;
     }
     if(index > maximum){
       maximum = index;
     }
   }
   cin >> num;
   for(int j = 0; j < num; ++j){
     cin >> index;
     arr2[index-1] += 1;
     if(index < lowest){
       lowest = index;
     }
     if(index > maximum){
       maximum = index;
     }
   }
  
   for(int k = lowest - 1; k < maximum; ++k){
     if(abs(arr1[k] - arr2[k]) > 0){
       cout << k+1 << " ";
     }
   }
   return 0;
}

