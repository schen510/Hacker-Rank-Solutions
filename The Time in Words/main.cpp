#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(){
   int h;
   cin >> h;
   int m;
   cin >> m;
   string time[30]= {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine", "half"};
  
  
   if(m == 0){
     cout << time[h-1] << " o' clock" << endl;
   }
   else if( m <= 30 ){
     cout << time[m-1];
     if(m % 15 == 0)
       cout << " past " << time[h-1];
     else if(m == 1)
       cout << " minute past " << time[h-1];
     else
       cout << " minutes past " << time[h-1];
   }
   else if (m > 30){
     cout << time[60-m-1];
     if (m % 15 == 0)
       cout << " to " << time[h]; 
     else if (m == 59)
       cout << " minute to " << time[h]; 
     else
       cout << " minutes to " << time[h]; 
   }
  
  
   return 0;
}

