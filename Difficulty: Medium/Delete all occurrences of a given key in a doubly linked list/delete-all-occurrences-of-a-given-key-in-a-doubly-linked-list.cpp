// User function Template for C++

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
        Node* temp = *head_ref;
        if(!temp){
            return;
        }
        while(temp){
            if(temp->data == x){
                if(temp == *head_ref){
                    Node* t = temp;
                    temp = temp->next;
                    temp->prev = nullptr;
                    *head_ref = temp;
                    delete t;
                }else if(!temp->next){
                    Node* t = temp;
                    temp = temp->next;
                    t->prev->next = nullptr;
                    delete t;
                }else{
                    Node* prev = temp->prev;
                    Node* t = temp;
                    temp = temp->next;
                    prev->next = temp;
                    temp->prev = prev;
                    
                    delete t;
                }
            }else{
                temp = temp->next;
            }
        }
    }
};