#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

void BubbleSort(vector<int>& a, int n){
   int swaps = 0;
   for (int i = 0; i < n-1; ++i){
     for(int j = 0; j < (n - i - 1); ++j){
       if(a[j] > a[j+1]){
         swap(a[j], a[j+1]);
         swaps += 1;
       }
     }
   }
  
   cout << "Array is sorted in " << swaps << " swaps." << endl;
   cout << "First Element: " << a[0] << endl;
   cout << "Last Element: " << a[n-1] << endl;
}


int main() {
   int n, swaps = 0;
   cin >> n;
   vector<int> a(n);
   for(int a_i = 0; a_i < n; a_i++){
    cin >> a[a_i];
   }
  
   BubbleSort(a, n);
   return 0;
}

