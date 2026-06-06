#include<iostream>
#include<vector>

int peakElement(std::vector<int>& nums1) {


        int n = nums1.size();

        if(n==1) {

            return 0 ;
        }

        if(nums1[0] > nums1[1]) {


            return 0 ; 
        }

        for( int i = 1 ; i < n - 1 ; i ++ ) {

              if(nums1[i] > nums1[i-1] && nums1[i] > nums1[i+1]) {

                        return i ;
              }
        }

        if(nums1[n-1] > nums1[n-2]) {

                return n-1 ;
        }

        return -1; 
}

int main () {

        std::vector<int> nums = {1,2,3,4,5};

        std:: cout << peakElement(nums) << std::endl;

        return 0 ;


}