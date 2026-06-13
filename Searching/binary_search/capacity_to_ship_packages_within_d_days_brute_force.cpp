#include<iostream>
#include<vector>
#include<climits>


int minimumCapacity(std::vector<int>& nums1 , int days) {

    int n = nums1.size();
         
      int minCap = INT_MIN;
  
      int maxCap = 0 ;

      for(int i = 0 ; i < n ; i ++) {

            if(nums1[i] > minCap) minCap = nums1[i];

            maxCap+=nums1[i];
        } 


        int start = minCap;

        int end = maxCap;

    
        
        for(int i = start ; i <= end ; i++) {
            
                    int requireDays = 1 ;
                    int sum = 0 ; 
                
                    for(int j = 0 ; j < n ; j++) {

                    if(sum + nums1[j] > i) {

                            requireDays++;
                            sum = nums1[j];

                    }else{

                            sum +=nums1[j];

                    }

                    
                }
                
                if(requireDays <= days) {

                        return i ; 

             }
        
    }
    
    return -1 ; 
}


int main () {

     std::vector<int> nums = {1 , 2 , 3 , 4,  5 , 6 , 7 , 8 , 9, 10 }; 

     int days = 5 ; 

    std:: cout << minimumCapacity(nums , days) << std::endl;
    
    return 0; 

}