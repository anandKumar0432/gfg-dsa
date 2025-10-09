/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// class Solution {
//   public:
//     Node* addOne(Node* head) {
//         // Your Code here
//         Node* temp = head;
//         vector<int> nums;
        
//         while(temp){
//             nums.push_back(temp->data);
//             temp = temp->next;
//         }
        
        
//         int carry = 1;
//         for(int i = nums.size()-1; i>=0&&carry; i++){
//             int sum = nums[i]+carry;
//             nums[i] = sum%10;
//             carry = sum/10;
//         }
//         if(carry){
//             nums.insert(nums.begin(),carry);
//         }
        
//         Node*newHead = nullptr;
//         Node* t = nullptr;
        
//         for(int i = 0; i<nums.size(); i++){
//             Node* newNode = new Node(nums[i]);
//             if(!newHead){
//                 newHead = newNode;
//                 t = newNode;
//             }else{
//                 t->next = newNode;
//                 t = newNode;
//             }
//         }
        
//         return newHead;
//     }
// };


class Solution {
  public:
    Node* addOne(Node* head) {
      Node*t=head;
      vector<int>nums;
      while(t!=NULL){
          nums.push_back(t->data);
          t=t->next;
      }
      int n=nums.size();
      int carry=1;
      for(int i=n-1;i>=0&&carry;i--){
          int sum=nums[i]+carry;
          nums[i]=sum%10;
          carry=sum/10;
      }
      if(carry)nums.insert(nums.begin(),carry);
      Node*temp=new Node(nums[0]);
      Node*tr=temp;
      for(int i=1;i<nums.size();i++){
          Node*p=new Node(nums[i]);
          tr->next=p;
          tr=tr->next;
      }
      return temp;
    }
};



