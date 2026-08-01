#include<iostream>
#include<stack>
void pushAtBottom(std::stack<int>&s , int val) { // TC - O(n)

        if(s.empty()) {

            s.push(val);
            return ; 

        }

        int temp = s.top();
        s.pop();
        pushAtBottom(s , val);
        s.push(temp);

}


void reverse(std::stack<int>&s){

        if(s.empty()) {

            return;

        }

        int temp = s.top();
        s.pop();
        reverse(s);
        pushAtBottom(s , temp);
}

void printStack(std::stack<int>s) {

        while(!s.empty()) {

                std:: cout << s.top() << " ";

                s.pop();

        }

        std::cout<<std::endl;
}

int main() {
    std::stack<int> st;
    
    st.push(3);
    st.push(2);
    st.push(1);
    
    pushAtBottom(st , 4);
    printStack(st);
    reverse(st);
    printStack(st);
    return 0;
    
}
    
    