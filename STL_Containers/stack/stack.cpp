#include<iostream>
#include<stack>

int main () {

     std:: stack<int> st;
     st.push(10);
     st.push(20);
     st.push(30);
     st.push(40);

     while (!st.empty())
     {
    

          std:: cout <<   st.top() <<  std::endl;

            st.pop();


     }
     

     return 0 ;

     
}