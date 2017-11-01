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
#include <regex>

using namespace std;


int main(){
   int N;
   cin >> N;
   vector<string> names;
   bool valid;
   regex gmailverify("([a-zA-Z0-9]+)([.]*)([a-zA-Z0-9]+)@gmail.com");
   for(int a0 = 0; a0 < N; a0++){
     string firstName;
     string emailID;
     cin >> firstName >> emailID;
    
     valid = regex_match(emailID, gmailverify);
     if(valid){
       names.push_back(firstName);
     } 
   }
  
   sort(names.begin(), names.end());
   for (vector<string>::const_iterator i = names.begin(); i != names.end(); ++i)
     cout << *i << endl;
   return 0;
}

