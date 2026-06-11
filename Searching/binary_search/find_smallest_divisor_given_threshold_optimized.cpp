#include<iostream>
#include<vector>
#include<climits>
#include<cmath>

bool possible(std::vector<int>&nums2 , int threshold , int divisor) {

          int totalThreshold = 0 ;

          int n = nums2.size();

          for(int i = 0 ; i < n ;  i ++  ) {

                totalThreshold+= (ceil((double)nums2[i]/divisor));

          }

          return totalThreshold <= threshold ; 


}


int findSmallestThreshold(std:: vector<int>& nums1 , int threshold ) {

        int n = nums1.size();

        int maxNums = INT_MIN;

        for(int i = 0 ; i < n ; i ++ ) {

            if(nums1[i] > maxNums) maxNums = nums1[i];

        }


        int low = 1 ; 

        int high = maxNums ;

        int ans = 0 ; 

        while(low <= high) {

                int mid = low + (high - low) / 2 ;



                if(possible(nums1 , threshold , mid )){

                            ans = mid ;

                            high = mid - 1 ;

                    
                } else{

                            low = mid + 1 ; 

                }


        }

            return ans ; 

}


int main () {

        std:: vector<int> nums = {1 , 2 , 5 , 9} ;

        int threshold = 6 ; 

        std:: cout << findSmallestThreshold(nums , threshold ) << std:: endl;

        return 0 ;

}