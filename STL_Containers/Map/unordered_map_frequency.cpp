#include<iostream>
#include<unordered_map>
#include<vector>

int main () {

    std::vector<int> nums = {1, 2, 2 , 3 , 4 , 1 , 2} ;

    int n = nums.size();

    std::unordered_map<int , int > mp;

    // int frequency = 0 ;

    bool found = false;

    for(int i = 0 ; i < n ; i ++ ) {

        mp[nums[i]]++;

    }

        for(int i = 0 ; i < n ; i ++) {


            if(mp[nums[i]] == 1 ) {

                 std:: cout << nums[i] << std:: endl;

                 found = true;

                 break;

            }

        }
        

        if(!found) {

            std:: cout << "No element found...\n";

        }

    return 0 ;

}