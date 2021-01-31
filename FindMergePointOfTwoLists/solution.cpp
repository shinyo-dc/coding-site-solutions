int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
/* 
My solution O(n^2) complexity

    SinglyLinkedListNode* curr1 = head1;
    SinglyLinkedListNode* curr2 = head2;
    int res = INT_MIN;
    
    while(curr1 != nullptr) {
        while(curr2 != nullptr) {
            if (curr1 == curr2) {
                res = curr1->data;
                break;
            }    
            curr2 = curr2->next;
        }
        if (res != INT_MIN) {
            break;
        }
        curr2 = head2;
        curr1 = curr1->next;
    } 
    
    return res;
    
*/
    SinglyLinkedListNode* curr1 = head1;
    SinglyLinkedListNode* curr2 = head2;
    
    while (curr1 != curr2) {
        if (curr1 == nullptr) {
            curr1 = head2;
        }
        else {
            curr1 = curr1->next;
        }
        
        if (curr2 == nullptr) {
            curr2 = head1;
        }
        else {
            curr2 = curr2->next;
        }
    }
    return curr1->data;
    
}
