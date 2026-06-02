#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maximumProductSubarray(vector<int>& nums) {

        int n = nums.size() ;

        int currentMax = nums[0] ;
        int currentMin = nums[0] ;

        int answer = nums[0];

        for(int i=1 ; i < n; i ++) {

              int prevMax = currentMax;

              int prevMin = currentMin;


              currentMax = max({nums[i] ,
                   prevMax * nums[i] ,
                    prevMin*nums[i]
                  });
               
             
              currentMin = min({ nums[i],
                              
                               prevMin*nums[i],
                               
                               prevMax * nums[i]
                              
                              });


               answer = max(answer , currentMax) ;


        }

        return answer ; 
}
int main ()  {

        vector<int> nums = {-2 , 3 , -4} ;

        cout << maximumProductSubarray(nums) << endl ;

        return 0 ;
        
}