#include<iostream>
#include<vector>

int findMinimum (std::vector<int>& nums1) {

        int n = nums1.size();


        int low = 0 ;

        int high = n  - 1 ;

        while(low < high) {

                int mid = low + (high - low)/2;


                if(nums1[mid] > nums1[high]) {

                        low = mid + 1 ; 

                }else {

                            high = mid;

                }

        }

        


        return nums1[low];


}


int main () {

        std::vector<int> nums = {6,7,8,9,10};

        std:: cout << findMinimum(nums) << std::endl;

        return 0 ;

}