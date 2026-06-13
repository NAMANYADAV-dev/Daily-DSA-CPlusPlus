#include<iostream>
#include<vector>
#include<climits>

bool possible(std::vector<int>& nums1 , int days , int mid ) {

        int sum = 0 ; 

        int requiredays = 1 ; 


        for(int i = 0 ; i < nums1.size() ; i ++) {

                if(sum + nums1[i] > mid ) {


                        requiredays++;
                        sum = nums1[i];


                }else{

                        sum += nums1[i];

                }


        }

        return requiredays <= days ;

}


int minimumCapacity(std::vector<int>& nums1 , int days) {

    int n = nums1.size();
         
      int minCap = INT_MIN;
  
      int maxCap = 0 ;

      for(int i = 0 ; i < n ; i ++) {

            if(nums1[i] > minCap) minCap = nums1[i];

            maxCap+=nums1[i];
        } 


        int low = minCap;

        int high = maxCap;

        int ans = -1 ; 

        while(low <= high ) {

                 int mid = low + (high - low) / 2 ;


                 if(possible(nums1 , days , mid )) {


                            ans = mid ;

                            high = mid - 1;

                 }else {

                            low = mid + 1; 

                 }

        }
        
       
    
    return ans ; 
}


int main () {

     std::vector<int> nums = {1 , 2 , 3 , 4,  5 , 6 , 7 , 8 , 9, 10 }; 

     int days = 5 ; 

    std:: cout << minimumCapacity(nums , days) << std::endl;
    
    return 0; 

}