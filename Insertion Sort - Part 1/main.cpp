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
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

void printVector(vector<int> ar){
  for(int i = 0; i < ar.size(); ++i){
    cout << ar[i] << " ";
   }
  cout << endl;
}

void insertionSort(vector <int> ar) {
  int num_to_move;
  int j;
  for(int i = 0; i < (ar.size()-1); ++i){
    if(ar[i] > ar[i+1]){
      num_to_move = ar[i+1];
      for(j = i; j>=0 && ar[j] > num_to_move; --j){
        ar[j+1] = ar[j];
        printVector(ar);
       }
      ar[j+1] = num_to_move;
      printVector(ar);
     }
   }

}
int main(void) {
  vector <int> _ar;
  int _ar_size;
  cin >> _ar_size;
  for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
    int _ar_tmp;
    cin >> _ar_tmp;
    _ar.push_back(_ar_tmp); 
   }

  insertionSort(_ar);
  return 0;
}

