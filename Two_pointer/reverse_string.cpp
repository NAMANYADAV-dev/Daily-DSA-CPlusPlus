#include<iostream>
#include<string>

void reverseString(std:: string& s) {

    int n = s.size();

    int left = 0 ;

    int right  = n - 1 ; 

    while(left < right) {

            std::swap(s[left] , s[right]);

            left++;
            right--;

    }

    std:: cout << std::endl;

    std:: cout << s << std::endl;

}

int main () {

    std:: string reverse;

    getline(std::cin , reverse) ;

    reverseString(reverse) ;

    return 0 ;

}