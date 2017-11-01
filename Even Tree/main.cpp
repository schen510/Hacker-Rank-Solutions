#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//notice that only the branches with even number of nodes are removed

struct Node{
  int num_children = 1;
  int parent = -1;
};

int main() {
  int num_nodes = 0, num_edges = 0, child, parent, total_deleted_edges = 0;
  cin >> num_nodes >> num_edges;
  
  vector<Node> nodes = vector<Node>(num_nodes);
  
  for(int i = 0; i < num_edges; ++i){
    cin >> child >> parent;
    nodes[child - 1].parent = parent - 1;
   }
  
  //Start from the bottom and add the number of children of this current node to the parent node.
  //Don't need to do this for root however.
  for(int j = num_nodes - 1; j > 0; --j){
    if(nodes[j].parent >= 0)
      nodes[nodes[j].parent].num_children += nodes[j].num_children;
   }
  
  for(int k = 0; k < num_nodes; ++k){
    if (nodes[k].parent >= 0 && (nodes[k].num_children %2 == 0))
      total_deleted_edges++;
   }
  
  cout << total_deleted_edges;
  return 0;
}

