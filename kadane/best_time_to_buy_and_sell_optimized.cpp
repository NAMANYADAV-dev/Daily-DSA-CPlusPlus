#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int buyAndSell(vector<int>& nums1) {

       int n = nums1.size() ;

        int profitTotal = 0 ;

        int minimumBuy = INT_MAX;

       for(int i = 0 ; i < n ; i ++) {

                 minimumBuy = min(minimumBuy , nums1[i]) ;
                 
                 profitTotal = max(profitTotal , (nums1[i] - minimumBuy));
                
       }

        return  profitTotal ;
    }

int main () {
     
        vector<int> nums = {7,1,5,3,6,4};

      cout <<  buyAndSell(nums) << endl;

        return 0 ;
     
}
