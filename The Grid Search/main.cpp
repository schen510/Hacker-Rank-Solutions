#include <bits/stdc++.h>
#include <string>
#include <queue>
#include <vector>

using namespace std;

bool findPattern(vector<string>& G, vector<string>& P, int R, int C, int r, int c){
   size_t found = 0, previous = 0, k = 0, x = 0;
   vector<queue<size_t>* > located_substr;
  
   for(int i = 0; i <= (R-r); ++i){
     located_substr.push_back(new queue<size_t>());
     do{
       found = G[i].find(P[0], found);
       if(G[i+r-1].find(P[r-1]) != string::npos)
       {
         located_substr[i]->push(found);
       }
       if(found != string::npos){
         found += 1;
       }
     }while(found != string::npos);
     found = 0;
   }
  
   for(int i = 0; i <= (R-r); ++i){
     while(!located_substr[i]->empty()){
       x = located_substr[i]->front();
       for(int j = 1; j <= (r-1); ++j){
         if((G[i+j].find(P[j], x) != x) || (G[i+j].find(P[j], x) == string::npos)){
           located_substr[i]->pop();
           break;
         }
         if(j == (r-1)){
           return true;
         }
       }
     }
   }
  
   return false;
}

int main(){
   int t;
   cin >> t;
   for(int a0 = 0; a0 < t; a0++){
     int R;
     int C;
     cin >> R >> C;
     vector<string> G(R);
     for(int G_i = 0; G_i < R; G_i++){
      cin >> G[G_i];
     }
     int r;
     int c;
     cin >> r >> c;
     vector<string> P(r);
     for(int P_i = 0; P_i < r; P_i++){
      cin >> P[P_i];
     }
    
     if(findPattern(G, P, R, C, r, c)){
       cout << "YES" << endl;
     }
     else
     {
       cout << "NO" << endl;      
     }

   }
   return 0;
}

