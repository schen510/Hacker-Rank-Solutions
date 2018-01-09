#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool comp (int i,int j) { return (i<j); }

int main() {
   int iterations = 0, data;
   vector<int> values;
   cin >> iterations;
  
   for(int i = 0; i < iterations; ++i){
     cin >> data;
     values.push_back(data);
   }
  
   sort(values.begin(), values.end(), comp);
  
   for (std::vector<int>::iterator it=values.begin(); it!=values.end(); ++it)
     cout << *it << " ";
  
   return 0;
}

