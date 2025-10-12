/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
        Node* temp = head;
        
        while(temp && temp->next){
            if(temp->data == temp->next->data){
                Node* t = temp->next;
                temp->next = t->next;
                if(t->next) t->next->prev = temp;
                
                delete t;
            }else{
                temp = temp->next;
            }
        }
        return head;
    }
};