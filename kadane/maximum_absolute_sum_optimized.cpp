#include<iostream>
#include<vector>


using namespace std;

int maximumAbsolute(vector<int>& nums1) {

        int n = nums1.size();

        int currentMax = nums1[0];
        int currentMin = nums1[0];
        int maxSum = nums1[0];
        int minSum = nums1[0];
         

        for(int i = 1 ; i < n; i ++) {

              currentMin = min(nums1[i], currentMin + nums1[i]);

              minSum = min(minSum , currentMin);

              currentMax = max(nums1[i], currentMax + nums1[i]);

              maxSum = max(maxSum , currentMax);


        }

         

        return max(abs(minSum) , abs(maxSum) )  ; 

}

int main () {

   vector<int> nums = {1,-3,2};
 
   cout << maximumAbsolute(nums) << endl;

   return 0 ; 
     
}