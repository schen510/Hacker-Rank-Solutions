#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
   int t;
   cin >> t;
   for(int a0 = 0; a0 < t; a0++){
     int n;
     int k;
     cin >> n >> k;
    
     /*
    
     Instead of implementing the for loop approach (brute-force) I used a different method:
       The highest value possible is k-1
    
    
     */
     if(((k-1)|k) <= n){
       cout << k-1 << endl;
     }
     else{
       cout << k-2 << endl;
     }
   }
  
   return 0;
}

