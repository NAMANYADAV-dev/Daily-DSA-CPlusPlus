#include<iostream>
#include<vector>

void  sum_4_array(std::vector<int>& nums1 , int target) {

            int n = nums1.size();

            for (int i = 0 ; i < n-3 ; i++) {


                    for(int j = i + 1 ; j < n-2 ; j++) {

                        
                            for(int k = j + 1 ; k < n-1; k++) {


                                    for(int l = k + 1 ; l < n ; l++) {



                                            int sum = nums1[i] + nums1[j] + nums1[k] + nums1[l];

                                            if(sum == target){


                                                    std:: cout << "[" << nums1[i] << " , " << nums1[j] << " , " << nums1[k] << " , " << nums1[l] << " ] " << std::endl;


                                            }

                                    }

                            }

                    }

            } 

}

int main () {

        std::vector<int> nums = {1 , 0 , -1 , 0 , -2 , 2};

        int target = 0 ;

        sum_4_array(nums , target);

        return 0 ;

}