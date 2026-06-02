#include<iostream>
#include<vector>
#include<climits>


using namespace std;

int maximumSumCircularSubarray(vector<int>& nums) {

    int n  = nums.size() ;


    int maximum = INT_MIN;

    for (int i=0 ; i < n; i++) {
        
        int  currentSum = 0 ;

        
           for (int j = 0 ; j < n; j++) {
 

                  currentSum +=nums[(i+j)%n];

                    
                     maximum = max(currentSum , maximum);
             
           }
    }
    return maximum;

}
int main ()  {
 
        vector<int> num = {5,-3,5};

        cout << maximumSumCircularSubarray(num) << endl;

        return 0 ;
     
}