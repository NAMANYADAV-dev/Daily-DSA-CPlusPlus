#include<iostream>
#include<vector>

using namespace std;

int main() {

     vector<int> nums = {1,2,3,4};

     int n = nums.size();

     
     for(int i = 0 ; i< n-1; i++) {

         bool swaped = false;
         
            for(int j = 0 ;j < n-i-1;j++) {

                 if (nums[j] > nums[j+1]){

                        swap(nums[j],nums[j+1]);

                        swaped = true;
                    
                 }
            }


            if(swaped == false) {

                cout << "arrays is already sorted ..."<< endl;

                break; 

            }

     }

     cout << endl;

     for(int i=0 ; i < n;i++) {

            cout << nums[i] << endl;

     }

     cout << endl;

     return 0 ;

}