#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Solution {
  //Write your code here
  private:
    queue<char> forward;
    stack<char> backward;
  
  public:
    void pushCharacter(char ch){
      backward.push(ch);
     }
  
    void enqueueCharacter(char ch){
      forward.push(ch);
     }
  
    char popCharacter(){
      char returnval; 
      returnval = backward.top();
      backward.pop();
      return returnval;
     }
  
    char dequeueCharacter(){
      char returnval;
      returnval = forward.front();
      forward.pop();
      return returnval;
     }
};

