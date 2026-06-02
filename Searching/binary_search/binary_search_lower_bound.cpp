#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>


int main () {

        std::vector<int> nums = {1 , 2 , 2 , 3 , 4, 5};
        
        int target = 2;
            
        auto it = std::upper_bound(nums.begin(),nums.end(), target);

        std::cout << *it << std::endl;
        
        return 0 ;

}