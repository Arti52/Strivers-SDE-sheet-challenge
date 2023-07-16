//beats 86% and 92%
#include <bits/stdc++.h> 
class Queue {
    vector<int> v;
    int i=0;

public:
    Queue() {
      
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
       return i>=v.size();
    }

    void enqueue(int data) {
       v.push_back(data);
    }

    int dequeue() {
       return i>=v.size()?-1:v[i++];
    }

    int front() {
      
         return i>=v.size()?-1:v[i];
    }
};
