#include<iostream>
#include<vector>


using namespace std;

int main () {

   vector<int> nums = {1,-3,2};


    int n = nums.size();

      int absoluteSum = 0 ; 

   for(int i = 0 ; i < n; i ++) {
            
     
            int sum = 0 ;

            for( int j = i ; j < n; j++) {

                         
                sum += nums[j];
                
                
                if(sum < 0 ) {

                    absoluteSum = max(absoluteSum ,  -(sum)) ;
                    
                }else {
                    
                    absoluteSum = max(absoluteSum ,  (sum)) ;

                }
    
                
            }
            
   }

   cout << absoluteSum << endl;

   return 0 ; 
     
}