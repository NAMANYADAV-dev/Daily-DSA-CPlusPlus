#include<iostream>
#include<unordered_map>

int main () {

        std::unordered_map<int , int > nums ;

        int n = 5;

        for (int i = 0 ; i < n ; i ++) {

            int x ;

            std::cout << "Enter map value : " ;

            std::cin>> x ;

            nums.insert({i , x});

        }


        for(auto it=nums.begin(); it!=nums.end() ; it++) {

             std::cout << it->first << " , " <<  it->second  << std::endl;

        }

        return 0 ;
}