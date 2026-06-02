#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int productMax( vector<int>& nums) {

       int n = nums.size();

       int productFind = INT_MIN;

       for( int i = 0 ;i < n ; i ++ ) {

            int productValues = 1 ;

            for( int j = i ; j < n; j ++ ) {

                  productValues *=nums[j] ;

                  productFind = max(productValues , productFind);
            }
       }
       return productFind ;
}

int main ()  {

      vector<int> product = {2,3,-2,4};

      int productValue = productMax(product);

      cout<< " maximum product is: " << productValue << endl;

      return 0;
}