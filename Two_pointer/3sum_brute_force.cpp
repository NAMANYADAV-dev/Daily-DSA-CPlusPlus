#include<iostream>
#include<vector>
#include<algorithm>

int main () {

        std:: vector<int> nums = {-1 , 0 , 1 , 2 , -1 , -4};

        int n = nums.size();

        std::sort(nums.begin() , nums.end());

        for(int i = 0 ; i < n - 2  ;i++) {


                  // Skip duplicate first elements
        if(i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }


                int left = i + 1;

                int right = n - 1 ; 

                while(left < right) {

                     int sum = nums[left] + nums[right] + nums[i];


                     if(sum == 0 ) {

                            std:: cout << "[" << nums[i] << ", " << nums[left] << " , " << nums[right] << "]" << std::endl;
                            left++;
                            right--;

                     }

                        else if(sum < 0) {

                            left++;

                     }

                     else{

                            right--;
                     }

                }



          }

         return 0;
}



