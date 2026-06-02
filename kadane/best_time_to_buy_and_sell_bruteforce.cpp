#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int buyAndSell(vector<int>& nums1) {

       int n = nums1.size() ;

        int profitTotal = 0 ;

       for(int i = 0 ; i < n-1 ; i ++) {

                
                for(int j = i+1 ; j < n;  j++) {



                                    int currentProfit = nums1[j] - nums1[i]; 

                                    profitTotal = max(currentProfit , profitTotal);
                        
                }
                
       }

        return  profitTotal ;
    }

int main () {
     
        vector<int> nums = {7,1,5,3,6,4};

      cout <<  buyAndSell(nums) << endl;

        return 0 ;
     
}
