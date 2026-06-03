#include<iostream>
#include<vector>

int searchInsertPosition(std::vector<int>& num , int target) {

          int vectorSize = num.size();

          int left = 0 ;

          int right = vectorSize - 1;

          int answer = -1 ;

          while(left <= right) {

                int mid = left + (right - left)/2;

                if(num[mid] >= target ) {

                        answer = mid ;
                        right = mid - 1;

                }else if(num[mid] < target) {

                        left = mid + 1;

                }

          }

          if(answer == -1) {

              answer = vectorSize ;
              
          }

          return answer ;
    }

int main () {

    std::vector<int> nums = {1,3,5,6};

    int target = 7;

    std::cout << searchInsertPosition(nums , target) << std::endl;

    return 0 ;

}
