    void levelOrder(Node* root){
     queue<Node*> nodes_to_visit;
     Node* node;
     nodes_to_visit.push(root);
    
     while(!nodes_to_visit.empty()){
       node = nodes_to_visit.front();
       cout << node->data << " ";
       nodes_to_visit.pop();
       if(node->left)
         nodes_to_visit.push(node->left);
       if(node->right)
         nodes_to_visit.push(node->right);
     }
    }
