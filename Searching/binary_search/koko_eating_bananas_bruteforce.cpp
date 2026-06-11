#include<iostream>
#include<vector>
#include<climits>

int  kokoEatingBananas(std::vector<int>& kokoEating , int h  ) {

        int n = kokoEating.size();

        int maxPiles = INT_MIN; 


        for(int i = 0 ;  i < n ;  i++) {

            if(kokoEating[i] > maxPiles) {

                maxPiles = kokoEating[i] ;

            }

        }


        for(int i = 1 ; i <= maxPiles  ; i ++) {

                int piles = 0 ;

              for(int j = 0 ; j < n   ; j ++) {

                    piles = piles +  (kokoEating[j] + i - 1) / i ; 
                    
                }
                  if(piles <= h) {
                      
                     return i ; 
                  }

        }

        return -1;

}

int main () {

    std:: vector<int> koko = {3 , 6 , 7 , 11};

    int h = 8 ; 

   
    std:: cout << kokoEatingBananas(koko , h ) << std::endl;

    return 0 ; 

}