#include<iostream>
#include<vector>
#include<climits>

int findMinimum (std::vector<int>& nums1) {

        int n = nums1.size();

        int minimumElement = INT_MAX;

        for(int i = 0 ; i < n ; i ++) {

                if(minimumElement > nums1[i]) {

                        minimumElement = nums1[i];

                }

        }


        return minimumElement;


}


int main () {

        std::vector<int> nums = {3 ,4 ,5 ,1 , 2};

        std:: cout << findMinimum(nums) << std::endl;

        return 0 ;

}