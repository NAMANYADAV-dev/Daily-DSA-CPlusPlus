#include <iostream>
#include <stack>
#include <string>

std::string reverseStringWithStack(std::string str) {

        std::string ans;

        std::stack<char>s;

        for(int i = 0 ; i < str.length() ; i++) {
            
            s.push(str[i]);
        }

        while(!s.empty()) {

              char top = s.top();

              ans+=top;

              s.pop();
        }

        return ans;

}

int main() {

    std::string str1 = "ABCD";

    std::cout << reverseStringWithStack(str1) << std::endl;

    return 0;
}
