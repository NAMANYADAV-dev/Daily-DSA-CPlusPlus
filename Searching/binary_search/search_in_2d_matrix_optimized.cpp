#include<iostream>
#include<vector>


bool searchMatrix(std::vector<std::vector<int>>& nums , int target) {


        int n = nums.size();

        int m = nums[0].size();
    
        int low = 0 ;

        int high = (n * m) - 1;

        while(low <= high) {

                int mid = low + (high - low) / 2;

                int row = mid / m;

                int cols = mid % m;

                if(nums[row][cols] ==  target) {

                     return true ;
                }

                else if(nums[row][cols] < target) {

                        low = mid + 1 ; 

                }else{


                        high = mid - 1 ; 

                }

        }

        return false ; 

}


int main () {

    std:: vector<std::vector<int>> nums = {     {1,3,5,7},
                                                {10,11,16,20},
                                                {23,30,34,60}
                                        };

                                    

        int target = 16;

        if(searchMatrix(nums , target)) {

            std:: cout << std:: boolalpha << true << std:: endl;
            
        }else{
            
            
            std:: cout << std:: boolalpha << false << std:: endl;

        }
         
         
        return 0 ;
    

}