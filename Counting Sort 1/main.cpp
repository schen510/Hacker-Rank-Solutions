#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int iterations, value; 
   int* data;
   cin >> iterations;
  
   data = new int[iterations]();
   for(int i = 0; i < iterations; ++i){
     cin >> value;
     data[value] += 1;
   }
  
   for(int j = 0; j < 100; ++j){
     cout << data[j] << " "; 
   }
  
   return 0;
}

