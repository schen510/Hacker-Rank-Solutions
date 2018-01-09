#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int count, data, *data_arr;
   cin >> count;
  
   data_arr = new int[count];
  
   for(int i = 0; i < count; ++i){
     cin >> data;
     data_arr[i] = data;
   }
  
   sort(data_arr, data_arr+count);
  
   if(count % 2 == 0){
     cout << ((data_arr[(count/2)-1] + data_arr[count/2]))/2 << endl;
   }
   else
     cout << data_arr[count/2] << endl;
   return 0;
}

