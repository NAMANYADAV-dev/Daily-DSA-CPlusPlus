#include<iostream>
#include<vector>

bool searchRotated(std::vector<int>& nums1 , int target) {

      int n = nums1.size();


      int low = 0 ;

      int high = n - 1 ;

      while(low <= high) {
        
            int mid = low + (high - low)/2;
            
            if(nums1[mid] == target) {
                
                return true;
            }
            
            
            if(nums1[low] == nums1[mid] && nums1[mid] == nums1[high]) {
                
                low++;
                high--;
                continue;
                
            }
            
           
            // right sorted 


            if(nums1[low] <= nums1[mid]) {

                if(target >= nums1[low] && target < nums1[mid]) {

                        high = mid - 1; 
                }else {

                        low = mid + 1;


                }

            }
            
                // left sorted 
                
            else {

                if(target > nums1[mid] && target <= nums1[high]) {

                         low = mid + 1 ; 



                }else {

                        high = mid - 1 ;

                }


            }

      }

        return false;

}

int main () {

        std:: vector<int> nums = {3 , 1 ,2 ,3 , 3 , 3, 3};

        int target = 2; 

        if(searchRotated(nums, target)){

            std:: cout << std::boolalpha << true << std::endl;
            
        }else{

            std:: cout << std::boolalpha << false << std::endl;


        }
        
}