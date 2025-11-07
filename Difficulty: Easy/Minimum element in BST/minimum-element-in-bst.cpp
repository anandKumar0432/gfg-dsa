/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    int minValue(Node* root) {
        // code here
        if(root == NULL) return NULL;
        if(root->left == NULL){
            return root->data;
        }else {
            return minValue(root->left);
        }
    }
};