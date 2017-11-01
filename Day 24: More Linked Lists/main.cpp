  public static Node removeDuplicates(Node head) {
    // Node to traverse
    Node traverse = head;
    
    /*
      Logic:
      If head is null then just return (nothing to traverse)
      else
        while we are not at the end of the list:
          - If the current head is not the same as the one in front of it, move the traversal forward.
          - if it is, then make the current node point to the node after the next node.
    
    */
    if(head == null){
      return head;
     }
    else{
      while(traverse.next != null){
        if(traverse.data != (traverse.next).data){
          traverse = traverse.next;
         }
        else{
          traverse.next = (traverse.next).next;
         }
       }
     }
    return head;
   }
