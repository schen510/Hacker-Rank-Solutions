#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long int highestPowerof2(unsigned long long int v)
{
   v--;
   v |= v >> 1;
   v |= v >> 2;
   v |= v >> 4;
   v |= v >> 8;
   v |= v >> 16;
   v++;
   v >>= 1;
   return v;
}


bool isPowerOfTwo(unsigned long long int n){
   return (n & (n - 1)) == 0;
}

void counterGame(unsigned long long int n){
   int turn = 0;
   while(1){
     if(isPowerOfTwo(n)){
       n >>= 1;
     }
     else{
       n -= highestPowerof2(n);
     }
    
     if (n == 1 && turn % 2 == 0){
       cout << "Louise" << endl;
       break;
     }
     else if (n == 1 && turn % 2 == 1){
       cout << "Richard" << endl;
       break;
     }
     else{
       ++turn;
     }
      
   }
}

int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int trials;
   unsigned long long int value;
   cin >> trials;
  
   for(int i = 0; i < trials; ++i){
     cin >> value;
     counterGame(value);
   }
   return 0;
}

