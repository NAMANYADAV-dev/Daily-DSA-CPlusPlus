#include<iostream>
#include<vector>
// #include<algorithm>

int main () {

    std:: vector<int> nums = {1 , 8 ,6 , 2 , 5 , 4 , 8 , 3 , 7};

    int n = nums.size();

    int area = 0;

    for(int i = 0 ; i < n ;i++) {

            for(int j = i + 1 ; j < n ; j++) {

                    int width = j - i;

                    int height = std::min(nums[i] , nums[j]);

                    area = std::max(area , (width*height));

            }

    }

    std:: cout << area << std::endl;

    return 0 ;

}