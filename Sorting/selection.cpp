#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
     
  vector<int> nums = {64,25,12,22,11};

  int n = nums.size();

  
  for( int i = 0 ; i < n-1 ; i++) {
      
      int minimumIndex = i ;

            for( int j = i+1 ; j < n ; j++) {


                if(nums[j] < nums[minimumIndex]) {

                        minimumIndex = j;

                }


            } 
            if(minimumIndex != i) {

                swap (nums[i], nums[minimumIndex]);

            }

    }


    for (int i = 0 ; i< n; i++) {

            cout << nums[i] << endl;

    }

    return 0 ;

}
