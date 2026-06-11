#include<iostream>
#include<vector>
#include<unordered_map>

int totalNumber(std::vector<int>& nums , int k ) {

        int n = nums.size() ;

        int totalNumber = 0 ;

        std::unordered_map<int , int> mp;

        mp[0] = 1 ;

        int prefixSum = 0 ;

        for(int i = 0 ; i < n ; i ++ ) {

             prefixSum += nums[i];

             if(mp.find(prefixSum - k ) != mp.end()) {

                     totalNumber+= mp[prefixSum - k]; 

             }

             mp[prefixSum]++; 


        }

        return totalNumber ;


}

int main () {

    std:: vector<int> nums = {1 , 1 , 1} ; 

    int k  = 2 ;

   std:: cout << totalNumber(nums , k ) << std:: endl;

   return 0 ;

}