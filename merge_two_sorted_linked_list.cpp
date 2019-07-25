Node* sortedMerge(Node* head1,   Node* head2)
{
    if(head1==NULL){
        return head2;
    }
    else if(head2==NULL){
        return head1;
    }
    Node *curr=NULL;
    Node *head3=NULL;
    while(head1!=NULL && head2!=NULL){
        if(head1->data<head2->data){
            if(curr==NULL){
                head3=head1;
                curr=head1;
                head1=head1->next;
            }
            else{
                curr->next=head1;
                curr=curr->next;
                head1=head1->next;
            }
        }
        else{
            if(curr==NULL){
                head3=head2;
                curr=head2;
                head2=head2->next;
            }
            else{
                curr->next=head2;
                curr=curr->next;
                head2=head2->next;
            }
        }
    }
    if(head1==NULL && head2!=NULL){
        curr->next=head2;
        return head3;
    }
    else if(head2==NULL && head1!=NULL){
        curr->next=head1;
        return head3;
    }
}
