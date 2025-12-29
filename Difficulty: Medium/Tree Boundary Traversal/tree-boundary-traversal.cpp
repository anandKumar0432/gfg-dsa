/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    bool isLeaf(Node* node){
        if(node->left == nullptr && node->right == nullptr){
            return true;
        }
        return false;
    }
    
    void lefttraverse(Node* root, vector<int> &res){
        if(root == nullptr) return;
        if(root->left == nullptr && root->right == nullptr){
            return;
        }
        
        res.push_back(root->data);
        
        if(root->left == nullptr && root->right != nullptr)
            lefttraverse(root->right, res);
        else
            lefttraverse(root->left, res);
    }
    
    void leaftraverse(Node* root, vector<int> &res){
        if(root == nullptr) return;
        if(isLeaf(root)){
            res.push_back(root->data);
            return;
        }
        leaftraverse(root->left, res);
        leaftraverse(root->right, res);
    }
    
    void righttraverse(Node* root, vector<int> &res){
        if(root == nullptr) return;
        if(root->left == nullptr && root->right == nullptr){
            return;
        }
        
        if(root->right == nullptr && root->left != nullptr)
            righttraverse(root->left, res);
        else
            righttraverse(root->right,res);
            
        res.push_back(root->data);
    }
    
    void solve(Node* root, vector<int> &res){
        lefttraverse(root->left, res);
        leaftraverse(root, res);
        righttraverse(root->right, res);
    }
    
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> res;
        if(root->left || root->right)
            res.push_back(root->data);
        solve(root, res);
        return res;
    }
};










