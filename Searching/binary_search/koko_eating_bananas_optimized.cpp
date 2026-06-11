#include<iostream>
#include<vector>
#include<climits>


bool possible(std::vector<int>& piles , int h , int speed) {


        int totalHours = 0 ;

        for(int i = 0 ; i < piles.size() ;  i ++ ) {

                totalHours  = totalHours + (piles[i] + speed - 1) / speed ;

        }

            return totalHours <= h ; 

}




int  kokoEatingBananas(std::vector<int>& kokoEating , int h  ) {

        int n = kokoEating.size();

        int maxPiles = INT_MIN; 


        for(int i = 0 ;  i < n ;  i++) {

            if(kokoEating[i] > maxPiles) {

                maxPiles = kokoEating[i] ;

            }

        }



        int low = 1 ; 

        int high = maxPiles ; 

        int ans = 0 ;

        while( low <=  high) {

                 int mid = low + (high - low)/ 2 ; 

                if( possible(kokoEating , h , mid ) == true) {

                        ans = mid ;

                        high = mid - 1 ;


                }else{

                        low = mid + 1 ; 


                }

        }


        return ans;

}

int main () {

    std:: vector<int> koko = {3 , 6 , 7 , 11};

    int h = 8 ; 

   
    std:: cout << kokoEatingBananas(koko , h ) << std::endl;

    return 0 ; 

}