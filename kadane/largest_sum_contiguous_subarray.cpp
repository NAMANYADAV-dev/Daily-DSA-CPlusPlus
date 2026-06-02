#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int largest (vector<int>& nums) {

    int n = nums.size();

    int maximum = INT_MIN;

    int sum = 0 ;

    for( int i = 0 ;i < n ; i ++) {
         
            sum += nums[i] ;

            maximum = max(maximum , sum ) ;

            if( sum < 0 ) {

                 sum = 0 ;
            }
        
    }

    return maximum ; 

}

int main () {
         
    vector<int> largestSum = {5,4,-1,7,8};

    int max = largest(largestSum);

    cout << " Maxmium is: " << max << endl; 

    return 0 ;

}