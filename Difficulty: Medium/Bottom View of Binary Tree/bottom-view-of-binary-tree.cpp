/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  
     void traversal(Node* root, vector<vector<int>> &positive, vector<vector<int>> &negative){
        if(root == nullptr) return;
        queue<Node*> q;
        queue<int> idx;
        q.push(root);
        idx.push(0);
        while(!q.empty()){
            Node* temp = q.front();
            int p = idx.front();
            q.pop();
            idx.pop();
            if(temp->left){
                q.push(temp->left);
                idx.push(p-1);
            }
            if(temp->right){
                q.push(temp->right);
                idx.push(p+1);
            }
            if(p >= 0){
                positive[p].push_back(temp->data);
            }else{
                negative[-p].push_back(temp->data);
            }
        }
    }
    void position(Node* root, int p, int &l, int &r){
        if(root == nullptr) return;
        
        l = min(p,l);
        r = max(p,r);
        if(root->left) position(root->left, p-1, l, r);
        if(root->right) position(root->right, p+1, l, r);
    }
    vector<int> bottomView(Node *root) {
        // code here
        if(root == nullptr) return {};
        
        int l = 0;
        int r = 0;
        
        position(root, 0, l, r);
        
        vector<int> res;
        
        vector<vector<int>> positive(r+1, vector<int>());
        vector<vector<int>> negative(abs(l)+1, vector<int>());
        
        traversal(root, positive, negative);
        
        for(int i=negative.size()-1; i>0; i--){
            res.push_back(negative[i][negative[i].size()-1]);
        }
        for(int i=0; i<positive.size(); i++){
            res.push_back(positive[i][positive[i].size()-1]);
        }
        return res;
    }
};







