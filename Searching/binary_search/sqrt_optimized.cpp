#include<iostream>


int squareRoot(int &p ) {

        int low = 0 ;

        int high = p;

        int answer = 0 ;

        while (low <= high) 
        {
        
            int mid = low + (high - low)/2;

            if( 1LL * mid * mid <= p) {

                answer = mid;

                low = mid + 1;

            }else{

                high = mid - 1; 

            }


        }
        
        return answer;

}

int main () {

        int x;
        std::cout << "Enter your square number ...\n";
        std::cin>>x;
        
        std:: cout << squareRoot(x) << std:: endl;

        return 0 ;

}