#include<iostream>
#include<vector>
#include<algorithm>

void  sum_4_array(std::vector<int>& nums1 , int target) {

            int n = nums1.size();
            
            std::sort(nums1.begin() , nums1.end());    
            
            for (int i = 0 ; i < n-3 ; i++) {
                
                if( i > 0 && nums1[i] == nums1[i - 1]) {

                        continue;
                }
                for(int j = i + 1 ; j < n-2 ; j++) {

                    if( j > i + 1 &&  nums1[j] == nums1[j - 1 ]) {

                                continue;
                    }        
                                int left = j + 1;
                    
                                int right = n - 1 ; 
                        
                            while(left < right) {

                                    long long sum = nums1[i] + nums1[j] + nums1[right] + nums1[left];

                                    if(sum == target){

                                            std:: cout << "[" << nums1[i] << " , " << nums1[j] << " , " << nums1[left] << " , " << nums1[right] << " ] " << std::endl;

                                            left++;
                                            right--;
                                            

                                            while(left < right && nums1[left] == nums1[left - 1]) {
                                                left++;

                                            }

                                            while(left < right && nums1[right] == nums1[right +  1]){

                                                 right--;
                                                
                                            } 


                                    }   else if(sum < target) {


                                                left++;

                                    }else{

                                                   right--;

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