#include<iostream>
#include<vector>

int main () {

        std:: vector<int> nums = {0 , 0 , 1 , 1 , 2 , 2 , 3 , 3 , 4};

        int n = nums.size();


        int k = 0 ;

        for(int i = 0 ; i < n ; i++) {

                if(nums[k] != nums[i]){

                        k++;

                        nums[k] = nums[i];

                }

        }

        for (int i = 0 ; i < k+1 ; i++) {

                std:: cout << nums[i] << std::endl;

        }


        return 0 ; 


}