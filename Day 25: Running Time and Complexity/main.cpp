#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n){
   if(n == 1)
     return false;
   else if(n == 2 || n == 3)
     return true;
   else if(n % 2 == 0 || n % 3 == 0)
     return false;
   else{
     for (int i=5; i*i<=n; i=i+6){
       if (n%i == 0 || n%(i+2) == 0)
       {
         return false;
       }
     }
     return true;
   }
}

int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int num_tests = 0, number;
   cin >> num_tests;
   for(int i = 0; i < num_tests; ++i){
     cin >> number;
     if(isPrime(number)){
       cout << "Prime" << endl;
     }
     else{
       cout << "Not prime" << endl;
     }
   }
   return 0;
}

