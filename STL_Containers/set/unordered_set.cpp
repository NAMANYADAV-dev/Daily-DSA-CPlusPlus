#include<iostream>
#include<unordered_set>

int main () {

     std:: unordered_set<int> st;

      st.insert(20);
      st.insert(30);
    st.insert(50);
    st.insert(80);
     for(auto it=st.begin(); it!=st.end(); it++) {

            std:: cout << *it << std::endl;


     }

     return 0 ;

}