/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */
 class Node{
    public:
        char data;
        Node* children[26];
        bool isTerminal;
    public:
        Node(){
            data = '#';
            for(int i = 0; i < 26; i++){
                children[i] = NULL;
            }
            isTerminal = false;
        } 
        Node(char val){
            data = val;
            for(int i = 0; i < 26; i++){
                children[i] = NULL;
            }
            isTerminal = false;
        }
};


class Trie {
    private: 
        Node* root;

public:
    /** Initialize your data structure here. */
    Trie() {
           root = NULL;
          }
     Trie(Node* node){
            root = node;
        }
    /** Inserts a word into the trie. */
    void insert(string word) {
        if(root == NULL){
            root = new Node();
        }
        Node* curr = root;
        int n = word.size();
        for(int i = 0; i < n; i++){
            if(curr->children[word[i] - 'a'] == NULL){
                curr->children[word[i] - 'a'] = new Node(word[i]);
            }
            curr = curr->children[word[i] - 'a'];
        }
        curr->isTerminal = true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node* curr = root;
        int n = word.size();
        for(int i = 0; i < n; i++){
            if(curr->children[word[i] - 'a'] == NULL) return false;
            curr = curr->children[word[i] - 'a'];
        }
        return curr->isTerminal;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
      Node* curr = root;
        int n = prefix.size();
        for(int i = 0; i < n; i++){
            if(curr->children[prefix[i] - 'a'] == NULL) return false;
            curr = curr->children[prefix[i] - 'a'];
        }
        return true;
    }
};
