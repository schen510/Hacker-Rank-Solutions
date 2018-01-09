#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int ar_size, int *  ar) {
   int temp;
   int num_shifts = 0;
   for(int i = 1; i < ar_size; ++i){
     for(int j = i-1; j >= 0 && (ar[j] > ar[j+1]); --j){
       temp = ar[j+1];
       ar[j+1] = ar[j];
       ar[j] = temp;
       num_shifts += 1;
     }
   }
   cout << num_shifts << endl;
}

int main() {
   int _ar_size;
   cin >> _ar_size;
   int _ar[_ar_size], _ar_i;
   for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
     cin >> _ar[_ar_i];
   }

  insertionSort(_ar_size, _ar);
   return 0;
}

