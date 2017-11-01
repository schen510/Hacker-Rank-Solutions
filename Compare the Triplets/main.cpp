#include <bits/stdc++.h>

using namespace std;

bool within_constraint(int a){
   return (a >= 1) && (a <= 100);
}

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
   // Complete this function
   vector <int> result;
   result.push_back(((a0 > b0) ? 1 : 0) + ((a1 > b1)? 1:0) + ((a2 > b2)? 1 : 0));
   result.push_back(((a0 < b0) ? 1 : 0) + ((a1 < b1)? 1:0) + ((a2 < b2)? 1 : 0));
   return result;
}

int main() {
   int a[6];
   cin >> a[0] >> a[1] >> a[2];
   cin >> a[3] >> a[4] >> a[5];
   for(int i = 0; i < 6; i++){
     if (!within_constraint(a[i])){
       cout << "One value inputted was not valid." << endl;
       return 0;
     }
   }
  
   vector < int > result = solve(a[0], a[1], a[2], a[3], a[4], a[5]);
   for (ssize_t i = 0; i < result.size(); i++) {
     cout << result[i] << (i != result.size() - 1 ? " " : "");
   }
   cout << endl;
  

   return 0;
}

