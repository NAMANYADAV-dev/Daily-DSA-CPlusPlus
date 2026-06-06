#include<iostream>
#include<vector>

int findPeak(std::vector<int>& nums1) {


        int n = nums1.size();

        int low = 0 ;

        int high = n - 1 ;

        while(low < high) {

                int mid = low + (high - low) / 2;

                if(nums1[mid] < nums1[mid+1]) {

                         low = mid + 1 ;

                }else{

                         high = mid ; 

                }

        }

        return low;

}


int main () {

        std:: vector<int> nums = {5 , 4 , 3 , 2 , 1} ;

        std:: cout << findPeak(nums) << std::endl;

        return 0 ;

}