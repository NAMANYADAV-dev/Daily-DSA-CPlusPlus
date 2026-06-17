#include<iostream>
#include<vector>
#include<algorithm>

int main () {

        std::vector<int> nums = {-4 , -1 , 0 , 3 , 10};

        int n = nums.size();

        for(int i = 0 ; i < n ;i++) {


                nums[i] = (nums[i] * nums[i]);

        }


            std::sort(nums.begin() , nums.end());



        for(int i = 0 ; i < n ;i++) {


            std::cout<< nums[i] << std::endl;

        }


    return 0;        

}