/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void inorderTraversal(Node* root, vector<int>& arr){
        if(root == nullptr)
            return;
        inorderTraversal(root->left, arr);
        arr.push_back(root->data);
        inorderTraversal(root->right, arr);
    }
    
    void merge(vector<int>& arr1, vector<int>& arr2, vector<int>& res){
        
        int n1 = arr1.size();
        int n2 = arr2.size();
        int i = 0,j = 0;
        while(i < arr1.size() && j < arr2.size()){
            if(arr1[i] <= arr2[j]){
                res.push_back(arr1[i++]);
            }else{
                res.push_back(arr2[j++]);
            }
        }
        while(i < arr1.size()){
            res.push_back(arr1[i++]);
        }
        while(j < arr2.size()){
            res.push_back(arr2[j++]);
        }
        
    }
    vector<int> merge(Node *root1, Node *root2) {
        // code here
        vector<int> BST1;
        vector<int> BST2;
        vector<int> res;
        inorderTraversal(root1, BST1);
        inorderTraversal(root2, BST2);
        merge(BST1, BST2, res);
        return res;
    }
};












