#include<iostream>
#include<vector>

int main () {

        std:: vector<int> nums = {0 , 0 , 1 , 1 , 2 , 2 , 3 , 3 , 4};

        int n = nums.size();

        std::vector<int> uniqueArrays;

        if(n > 0 ) {

            uniqueArrays.push_back(nums[0]);

        }

        int k = 1 ;

        for(int i = 1 ; i < n ; i++) {

                if(uniqueArrays[k-1] == nums[i]){


                        continue;

                }else{

                        uniqueArrays.push_back(nums[i]);

                        k++;

                }

        }


        for (int i = 0 ; i < k  ; i++) {

                std:: cout << uniqueArrays[i] << std:: endl;

        }

        return 0 ; 


}