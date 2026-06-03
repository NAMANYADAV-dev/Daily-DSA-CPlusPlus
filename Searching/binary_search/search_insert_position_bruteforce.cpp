#include<iostream>
#include<vector>

int searchInsertPosition(std::vector<int>& num , int target) {

          int vectorSize = num.size();

          int answer = 0 ;

          for(int i = 0  ; i < vectorSize ; i++ ) {

                if(num[i] >= target) {

                    answer = i ;
                   return answer;

                }

          }

        
          return answer = vectorSize;
          

}

int main () {

    std::vector<int> nums = {1,3,5,6};

    int target = 4;

    std::cout << searchInsertPosition(nums , target) << std::endl;

    return 0 ;

}
