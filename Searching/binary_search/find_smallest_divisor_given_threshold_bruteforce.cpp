#include<iostream>
#include<vector>
#include<climits>
#include<cmath>


int findSmallestThreshold(std:: vector<int>& nums1 , int threshold ) {

        int n = nums1.size();

        int maxNums = INT_MIN;

        for(int i = 0 ; i < n ; i ++ ) {

            if(nums1[i] > maxNums) maxNums = nums1[i];

        }



        for(int i = 1 ; i <= maxNums ; i++) {


                int totalThreshold = 0 ;

                for(int j = 0 ;  j < n ; j ++) {

                        totalThreshold+= (ceil((double)nums1[j]/i));

                }

                if(totalThreshold <= threshold) {

                        return i ; 

                }

        }

        return -1 ; 

}


int main () {

        std:: vector<int> nums = {1 , 2 , 5 , 9} ;

        int threshold = 6 ; 

        std:: cout << findSmallestThreshold(nums , threshold ) << std:: endl;

        return 0 ;

}