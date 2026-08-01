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

int main() {
    std::stack<int> st;
    
    st.push(3);
    st.push(2);
    st.push(1);
    
    pushAtBottom(st , 4);
    
    while (!st.empty()) 
    {
        
        std:: cout << st.top() << "  ";

        st.pop();

    }
    
    std:: cout << std::endl;

    return 0;
}