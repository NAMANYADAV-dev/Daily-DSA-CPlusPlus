#include<iostream>
#include<vector>
#include<algorithm>

int main () {

        std::vector<int> nums = {1 , 2 , 2, 3, 4, 6};

        int target = 2;

        auto it  = std::lower_bound(nums.begin() , nums.end() , target);

        std::cout << *it << std::endl;
        

        return 0 ;

}