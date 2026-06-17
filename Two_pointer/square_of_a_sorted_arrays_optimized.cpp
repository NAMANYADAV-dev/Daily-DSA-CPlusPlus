#include<iostream>
#include<vector>
#include<algorithm>

int main () {

        std::vector<int> nums = {-4 , -1 , 0 , 3 , 10};

        int n = nums.size();


        std::vector<int> result(n);

        int left = 0 ;

        int right = n - 1;

        int index = n - 1 ;

        while(left <= right) {

            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if(leftSquare > rightSquare) {

                result[index] = leftSquare;

                left++;

            }else{


                    result[index] = rightSquare;

                    right--;

            }

                index -- ;



        }


        for(auto& x: result) {

            std:: cout << x << std::endl;

        }

    return 0;        

}