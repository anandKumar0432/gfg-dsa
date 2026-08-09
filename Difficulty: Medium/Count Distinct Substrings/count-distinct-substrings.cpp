struct Node{
    Node* links[26];
    
    bool containsKey(char ch){
        return links[ch - 'a'] != NULL;
    }
    
    void put(char ch, Node* node){
        links[ch - 'a'] = node;
    }
    
    Node* get(char ch){
        return links[ch - 'a'];
    }
    
};

class Trie{
    private: Node* root;
    
    public:
    Trie(){
        root = new Node();
    }
    
    int insert(string& word, int start){
        int count = 0;
        Node* node = root;
        
        for(int i=start; i<word.size(); i++){
            if(!node->containsKey(word[i])){
                node->put(word[i], new Node());
                count++;
            }
            node = node->get(word[i]);
        }
        
        return count;
    }
};

class Solution {
  public:
    int countSubs(string& s) {
        // code here
        int count = 0;
        Trie* tr = new Trie();
        for(int i=0; i<s.size(); i++){
            count += tr->insert(s, i);
        }
        
        return count;
    }
};


















