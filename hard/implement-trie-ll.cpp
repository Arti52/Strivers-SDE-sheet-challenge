#include <bits/stdc++.h> 
using namespace std;
class Node {
public:
    char data;
    unordered_map<char, Node*> children;
    bool isTerminal;
    int terminalCount;
    int prfx;
    Node(char d){
        data = d;
        isTerminal = false;
        terminalCount = 0;
        prfx=0;
    }
};
class Trie{
    Node *root;
    public:
    Trie(){
        root = new Node('\0');
    }
    void insert(string &word){
        Node *curr = root;
        for(int i=0;i<word.length();i++){
            char ch = word[i];
            if(curr->children[ch]!=NULL)
                curr = curr->children[ch];
            else{
                Node *n = new Node(ch);
                curr->children[ch] = n;
                curr = n;
            }
            curr->prfx++;
        }
        curr->isTerminal = true;
        curr->terminalCount++;
    }
    int countWordsEqualTo(string &word){
        Node *curr = root;
        for(int i=0;i<word.length();i++){
            char ch = word[i];
            if(curr->children[ch]!=NULL){
                curr = curr->children[ch];
            }else{
                return 0;
            }
        }
        return curr->terminalCount;
    }
    int countWordsStartingWith(string &word){
        Node *curr = root;
        for(int i=0;i<word.length();i++){
            char ch = word[i];
            if(curr->children[ch]!=NULL)
                curr = curr->children[ch];
            else
                return 0;
        }

        return curr->prfx;
    }
    void erase(string &word){
        Node *curr = root;
        for(int i=0;i<word.length();i++){
            char ch = word[i];
            if(curr->children[ch]!=NULL){
                curr = curr->children[ch];
                curr->prfx--;
            }else{
                return;
            }
        }
        if (curr->isTerminal){
          if (curr->terminalCount == 1) {
            curr->isTerminal = false;
            curr->terminalCount = 0;
          } else
            curr->terminalCount--;
        }
    }
};
