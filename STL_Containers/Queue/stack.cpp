#include<iostream>
#include<stack>


int main () {

        std::stack<int> nums;
        
        nums.push(20) ;
        nums.push(30) ;
        nums.push(40) ;
        nums.push(50) ;
        nums.push(60) ;

        while(!nums.empty()) {

            std:: cout << nums.top() << std:: endl;

            nums.pop();
            
        }


        return 0 ;

}