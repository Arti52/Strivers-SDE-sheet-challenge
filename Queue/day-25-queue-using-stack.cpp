class Queue {
    // Define the data members(if any) here.
    stack<int>s1;
    stack<int>s2;
    int size;
    public:
    Queue() {
        // Initialize your data structure here.
        size=0;
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
       while(!s1.empty())
       {
           int val = s1.top();
           s1.pop();
           s2.push(val);
        }
       s1.push(val);
       while(!s2.empty())
       {
           int val = s2.top();
           s2.pop();
           s1.push(val);
       }
       size++;
    }

    int deQueue() {
        // Implement the dequeue() function.
       if(s1.empty())
       {
           return -1;
       }
       else
       {
           int val = s1.top();
           s1.pop();
           size--;
           return val;
       }
    }

    int peek() {
          if(s1.empty())
       {
           return -1;
       }
       else
       {
           int val = s1.top();
           return val;
       }
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
          if(s1.empty())
       {
           return true;
       }
       else
       {
           return false;
       }
   }
    
};
