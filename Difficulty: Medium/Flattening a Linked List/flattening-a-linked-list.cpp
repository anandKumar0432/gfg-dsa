/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node *flatten(Node *root) {
        // code here
        Node* temp = root;
        vector<int> res;
        
        while(temp){
            Node* temp2 = temp;
            while(temp2){
                res.push_back(temp2->data);
                temp2 = temp2->bottom;
            }
            temp = temp->next;
        }
        
        sort(res.begin(), res.end());
        
        if(res.size() == 0){
            return nullptr;
        }
        
        temp = new Node(res[0]);
        root = temp;
        for(int i=1; i<res.size(); i++){
            Node* temp1 = new Node(res[i]);
            temp->bottom = temp1;
            temp = temp1;
        }
        
        return root;
    }
};























