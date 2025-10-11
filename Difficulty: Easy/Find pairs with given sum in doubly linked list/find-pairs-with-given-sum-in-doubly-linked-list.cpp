// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        Node* left = head;
        Node* right = head;
        
        vector<pair<int,int>> pair;
        
        while(right && right->next){
            right = right->next;
        }
        
        
        while(left->data < right->data){
            int sum = left->data + right->data;
            if(sum > target){
                right = right->prev;
            }else if(sum < target){
                left = left->next;
            }else{
                pair.push_back({left->data, right->data});
                left = left->next;
                right = right->prev;
            }
        }
        
        
        return pair;
    }
};