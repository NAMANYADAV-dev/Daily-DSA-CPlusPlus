#include<iostream>

int main () {

    int arr[] = {10 , 20 , 30 , 40 , 50 };

    int x = sizeof(arr)/sizeof(int);

    for(int i = 0 ; i < x ; i++) {
        
            std:: cout << arr[i] << std:: endl;

    }

    return 0 ;


}