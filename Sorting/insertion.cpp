#include<iostream>
#include<vector>

using namespace std;


void insertionSort(vector<int>& nums1) {

    int n = nums1.size();

    for(int i = 1; i < n; i++) {


                int currentElement = nums1[i];

                int j = i - 1;

                while(j >=0 && nums1[j] > currentElement) {

                        nums1[j+1] = nums1[j];

                        j--;

                }

                nums1[j + 1] = currentElement;

    }
}


int main() {

        vector<int> nums = {5,3,4,1};

        insertionSort(nums);

        for(int i = 0 ; i < nums.size() ; i++) {

                cout << nums[i] << endl;

        }

        return 0 ;
}