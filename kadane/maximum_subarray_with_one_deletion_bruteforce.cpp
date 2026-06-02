#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int oneDeletion(vector<int>& nums1) {


        int n = nums1.size();

        int answer = INT_MIN;

        // Generate all subarrays

        for(int i=0 ; i < n;i ++) {

           
                for( int j = i ; j < n;j ++) {


                        int normalSum = 0 ;


                        for(int x = i ; x <= j ;x ++) {


                                normalSum += nums1[x];



                                
                        }

                        answer = max(answer , normalSum);


                        for(int k = i ; k<=j ; k++) {


                                int deletionSum = 0 ;


                                for(int x = i ; x<=j ; x++) {


                                        if(x == k) {

                                                continue;

                                        }
                                        
                                        deletionSum +=nums1[x];


                                }

                                answer = max(deletionSum , answer);


                        }


                }

        }

        return answer;

}

int main () {


        vector<int> nums = {1,-2,0,3};

        cout << oneDeletion(nums) << endl;

        return 0;


}