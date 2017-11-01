#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {

  /*
    One method is the brute force method of using a for loop and looping all numbers between L and R and performing an      xor on it. However, super inefficient method since it would be O(n^2) essentially.
    Don't want to use that because it's too slow
  */
  
  int msb = 0, finalVal = 0, shifter = 1;
  int shift = l^r;
  
  // After XORing L and R we can continously shift the result until we're left with all 0's which means we found our MSB
  while(shift){
    msb++;
    shift >>= 1;
   }
  
  // Once we have our MSB, we can continously adding an additional bit to the MSB location to find the max value.
  for(int i = 0; i < msb; ++i){
    finalVal += shifter;
    shifter <<= 1;
   }
  
  return finalVal;
  
}

int main() {
  int res;
  int _l;
  cin >> _l;
  
  int _r;
  cin >> _r;
  
  res = maxXor(_l, _r);
  cout << res;
  
  return 0;
}

