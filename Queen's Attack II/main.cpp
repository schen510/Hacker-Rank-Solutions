#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

template <typename X,typename Y>                          
pair<X,Y> operator+(const pair<X,Y> & lhs,const pair<X,Y> & rhs) {  
   return {lhs.first + rhs.first, lhs.second + rhs.second};                  
} 

bool isWithinBoundaries(pair<int, int> point, int n){
   return (point.first > 0 && point.second > 0 && point.first <= n && point.second <= n);
}


int main(){
   int n, k , rQueen, cQueen, rObstacle, cObstacle;;
  
   cin >> n >> k;
   cin >> rQueen >> cQueen;
   int north = abs(1-rQueen), south = abs(n-rQueen), west = abs(1-cQueen), east = abs(n-cQueen);
  
   int northeast = min(north, east), southeast = min(south, east), southwest = min(south, west), northwest = min(north,west); 
  
   for(int a0 = 0; a0 < k; ++a0){
     cin >> rObstacle >> cObstacle;
     if(rObstacle == rQueen && cObstacle < cQueen){
       if((abs(cObstacle - cQueen)) < west){
         west = abs(cObstacle - cQueen)-1;
       }
     }
     else if(rObstacle == rQueen && cObstacle > cQueen){
       if((abs(cObstacle - cQueen)-1) < east){
         east = abs(cObstacle - cQueen)-1;
       }
     }
     if(cObstacle == cQueen && rObstacle < rQueen){
       if((abs(rObstacle - rQueen)-1) < north){
         north = abs(rObstacle - rQueen)-1;
       }
     }
     else if(cObstacle == cQueen && rObstacle > rQueen){
       if((abs(rObstacle - rQueen)-1) < south){
         south = abs(rObstacle - rQueen)-1;
       }
     }
     else if (abs(double(rObstacle - rQueen)/(cObstacle-cQueen)) == 1.0){
       if((rObstacle < rQueen) && (cObstacle > cQueen) && (min(abs(rQueen-rObstacle), abs(cQueen-cObstacle))-1 < northeast)){
         northeast = min(abs(rQueen-rObstacle), abs(cQueen-cObstacle))-1;
       }
       else if((rObstacle > rQueen) && (cObstacle > cQueen) && (min(abs(rQueen-rObstacle), abs(cQueen-cObstacle))-1 < southeast)){
         southeast = min(abs(rQueen-rObstacle), abs(cQueen-cObstacle))-1;
       }
       else if((rObstacle < rQueen) && (cObstacle < cQueen) && (min(abs(rQueen-rObstacle), abs(cQueen-cObstacle))-1 < northwest)){
         northwest = min(abs(rQueen-rObstacle), abs(cQueen-cObstacle))-1;
       }
       else if((rObstacle > rQueen) && (cObstacle < cQueen) && (min(abs(rQueen-rObstacle), abs(cQueen-cObstacle))-1 < southwest)){
         southwest = min(abs(rQueen-rObstacle), abs(cQueen-cObstacle))-1;
       }
     }
    
   }
   cout << north + east + south + west + northeast + southeast + southwest + northwest << endl;
   return 0;
}

