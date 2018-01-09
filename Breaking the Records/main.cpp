#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
   // Complete this function
   int max = s[0], min = s[0], break_low = 0, break_high = 0;
   vector<int> result;
   for(auto val: s){
     if(val > max){
       break_high++;
       max = val;
     }
     if(val < min){
       break_low++;
       min = val;
     }
   }
  
   result.push_back(break_high);
   result.push_back(break_low);
  
   return result;
}

int main() {
   int n;
   cin >> n;
   vector<int> s(n);
   for(int s_i = 0; s_i < n; s_i++){
    cin >> s[s_i];
   }
   vector < int > result = getRecord(s);
   string separator = "", delimiter = " ";
   for(auto val: result) {
     cout<<separator<<val;
     separator = delimiter;
   }
   cout<<endl;
   return 0;
}

