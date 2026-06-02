#include<iostream>
#include<vector>
#include<climits>


using namespace std;
 
int maxvalue(vector<int>& nums) {
     

      int n  = nums.size() ; 

      int maximumSubarray = INT_MIN;

      int sum = 0 ;

      for( int i = 0 ;i < n ; i ++) {

           sum += nums[i] ;

           if( sum  < 0 ) {
              
               sum = 0 ;
           }else {

               maximumSubarray = max(maximumSubarray , sum ) ;
           }
      }
      return maximumSubarray ;
}
int main () {

     // O(n^3) use karenge okay 

     vector<int> kadane = {-2,1,-3,4,-1,2,1,-5,4};

     int max = maxvalue(kadane);
     cout << "Maximum subarrays is :" << max << endl;
     return 0;
}