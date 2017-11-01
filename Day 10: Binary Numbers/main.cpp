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

void binary(int num)
{
  int rem;
  int count = 0, max = 0;
  
  while (num > 1){
    rem = num % 2;
    if( rem == 1 )
      count += 1;
    else{
      if (count > max){
        max = count;
       }
      count = 0;
     }
    num = num / 2;
   }
  
  if(num == 1){
    count += 1;
    if(count > max){
      max = count;
     }
   }
  
  cout << max << endl;
}

int main(){
  int n;
  cin >> n;
  binary(n);
  return 0;
}

