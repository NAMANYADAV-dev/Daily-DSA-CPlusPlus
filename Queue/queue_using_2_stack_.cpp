#include<iostream>
#include<stack>
using namespace std;

// Queue using 2 stacks (costly push approach)
// Idea: always keep the oldest element (queue front) on top of s1
// push  -> O(n)
// pop   -> O(1)
// front -> O(1)

class Queue {
    stack<int> s1;   // main stack: holds elements in queue order (top = front)
    stack<int> s2;   // helper stack: temporary storage during push
    public:

            void push (int data) {

                    // Step 1: move all elements from s1 to s2 (s1 --> s2)
                    while (!s1.empty()){

                            s2.push(s1.top());
                            s1.pop();
                    }

                    // Step 2: push the new element into s1 (it is now at the bottom)
                    s1.push(data);

                    // Step 3: move all elements back from s2 to s1 (s2 --> s1)
                    // older elements end up on top, the new element stays at the bottom
                    while (!s2.empty())
                    {
                        s1.push(s2.top());
                        s2.pop();
                    }

            }

            // Remove the front element (top of s1 = front of queue)
            void pop () {
                    // check for empty queue, otherwise pop on an empty stack crashes
                    if (s1.empty()) {
                    cout << "Queue is empty\n";
                     return;
                     }
                    s1.pop();
            }

            // Return the front element
            int front() {
                if(s1.empty()) {

                    cout << "Queue is empty\n";
                    return -1;   // return -1 if the queue is empty

                }
                return s1.top();   // top of s1 is the front of the queue
            }

            // Check whether the queue is empty (true = empty)
            bool empty() {
               return s1.empty();
            }

};


int main() {

        Queue q;
        q.push(1);
        q.push(2);
        q.push(3);

        // Until the queue is empty: print the front, then pop it
        // Expected output: 1 2 3 (FIFO order)
        while (!q.empty())
        {
            cout << q.front() << endl;
            q.pop();
        }

        return 0;

}
