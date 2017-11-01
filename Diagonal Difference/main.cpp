#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
   int n;
   int sum1 = 0, sum2 = 0;
   cin >> n;
  
   vector< vector<int> > a(n,vector<int>(n));
  
   //Read in the values from standard int
   for(int i = 0; i < n; ++i)
   {
     for(int j = 0; j < n; ++j)
     {
       cin >> a[i][j];
     }
   }
  
   //Add up the first diagonal -- start from top left
   for(int i = 0;i < n; ++i)
   {
     sum1 += a[i][i];
   }
  
   //Add up the secondary diagonal -- start from top right
   for(int j = 0; j < n; ++j )
   {
     sum2 += a[j][n-j-1];
   }
  
   cout << abs(sum1 - sum2) << endl;
   return 0;
}

