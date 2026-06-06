#include<iostream>
#include<map>
#include<string>

int main() {

    std::map<int , std::string > mp = {{1, "naman"} , {2 , "shivam"} , {3 , "vivek"}};

    for(auto&p : mp){

        std:: cout << p.first << " ,  " << p.second <<std:: endl;
    }

    return 0 ;

}