#include<iostream>
#include<vector>

bool twoSum(std::vector<int>& nums1 , int target) {

        int n = nums1.size();

        int left = 0 ;

        int right = n - 1 ; 

        while(left < right) {

            
                int sum = nums1[left] + nums1[right];

                if(sum == target) {

                        return true;

                }else if(sum < target) {

                        left++;

                }else{

                        right--;

                }

        }

        return false;

}

int main () {

        std::vector<int> nums = {2 , 7 , 11 , 15};

        int target = 9 ;

        if(twoSum(nums , target)) {

            std:: cout << std::boolalpha << true <<  std::endl;

        }else {

             std:: cout << std::boolalpha << false << std::endl;

        }

        return 0 ;

}