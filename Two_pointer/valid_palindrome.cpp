#include<iostream>
#include<string>
#include<cctype>

bool checkPalindrome(std::string& palindrome) {

        int length = palindrome.size();

        int left = 0 ;

        int right = length - 1 ;

        while(left < right) {

                while (left < right  && !isalnum(palindrome[left]))
                {
                        left++;
                }
                
                while (left < right && !isalnum(palindrome[right]))
                {
                        right--;
                }
                

                if(tolower(palindrome[left]) != tolower(palindrome[right])){


                         return false;

                }

                        left++;
                        right--;

        }
        

        return true;

}

int main () {

        std:: string palindrome ;

        getline(std::cin, palindrome);

        if(checkPalindrome(palindrome)) {

                std:: cout << std::boolalpha << true << std::endl;
                
            }else{


                std:: cout << std::boolalpha << false << std::endl;
                
            }

            return 0 ;
}