#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int num_entries;
   string name, number;
   map<string, string> phonebook;
   cin >> num_entries;
  
   for(int i = 0; i < num_entries; ++i){
     cin >> name;
     cin >> number;
     phonebook.insert(pair<string,string>(name, number));
   }
  
   while(cin >> name){
     auto search = phonebook.find(name);
     if(search != phonebook.end()){
       cout << name << "=" << search -> second << endl;
     }
     else{
       cout << "Not found" << endl;
     }
   }
  
   return 0;
}

