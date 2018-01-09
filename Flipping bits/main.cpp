#include <bits/stdc++.h>

using namespace std;

long flippingBits(long N) {
   // Complete this function
   long total = 0;
   for(int i = 0; i < 32; i++){
     if(N & 1){

     }
     else{
       total += (1 << (i));
     }
    
     N >>= 1;
   }
  
   return (unsigned) total;
}

int main() {
   int T;
   cin >> T;
   for(int a0 = 0; a0 < T; a0++){
     long N;
     cin >> N;
     long result = flippingBits(N);
     cout << result << endl;
   }
   return 0;
}

