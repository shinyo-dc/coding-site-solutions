bool has_cycle(SinglyLinkedListNode* head) {
    if (head == nullptr) 
        return false;
        
    SinglyLinkedListNode* fast = head;
    SinglyLinkedListNode* slow = head;
    
    while (fast != nullptr && fast->next != nullptr) {    // if the list doesn't loop then this will break
        slow = slow->next;
        fast = fast->next;
        fast = fast->next;
        if (slow == fast)
            return true;           
    }

    return false;
    
}
