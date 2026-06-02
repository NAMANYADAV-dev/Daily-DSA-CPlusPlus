#include<iostream>
#include<vector>
#include<climits>


using namespace std;

int maximumSumCircularSubarray(vector<int>& nums) {

    int n  = nums.size() ;
     


    int totalSum = 0 ;

    for ( int i = 0 ; i < n; i ++) {

          totalSum += nums[i];
    }


    int currentMin = nums[0];
    
    int currentMax = nums[0];

    int maxSum = nums[0];
    int minSum = nums[0];


    for(int i= 1 ; i < n; i ++) {


            currentMin = min(nums[i] , currentMin + nums[i]);
            
            minSum = min(minSum , currentMin) ;

            currentMax = max(nums[i], currentMax + nums[i]) ;

            maxSum = max (maxSum , currentMax) ; 


            

        }

        if(maxSum < 0) {

             return maxSum ; 
        }


     int maximumSum = INT_MIN ;
     
     int circularSum = totalSum - minSum ;

     maximumSum = max(circularSum , maxSum) ;

     return maximumSum ; 
     

}
int main ()  {
 
        vector<int> num = {8,-1,-3,8};

        cout << maximumSumCircularSubarray(num) << endl;

        return 0 ;
     
}