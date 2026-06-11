#include<iostream>
#include<vector>


bool searchMatrix(std::vector<std::vector<int>>& nums , int target) {


        int n = nums.size();

        int m = nums[0].size();

        for(int i = 0 ; i < n ; i ++) {

                for (int j = 0 ; j < m ; j++) {

                        if(nums[i][j] == target){

                             return true;
                        }

                }

        }

        return false;

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