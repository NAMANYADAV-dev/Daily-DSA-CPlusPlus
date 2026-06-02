#include<iostream>

int main () {

   int tenRupee= 10 ;

   int &aliasTenRupee = tenRupee ;

    std::cout << aliasTenRupee << std::endl;


     int elevenRupee = 11;

     const int &aliasElevenRupee = elevenRupee;

     std::cout << aliasElevenRupee << std::endl;


     const int twelveRupee = 12;

     const int &aliasTwelveRupee = twelveRupee;

     std::cout << aliasTwelveRupee << std::endl;

    return 0 ;

}