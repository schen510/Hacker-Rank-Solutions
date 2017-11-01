    Node* insert(Node *head,int data)
    {
      Node* new_node = new Node(data);
      Node* traverse = head;
      if(head){
        while(traverse->next){
          traverse = traverse->next;
        }
        if(head)
        traverse->next = new_node;
      }
      else{
        head = new_node;
      }
      return head;
    }
