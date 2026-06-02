#include<iostream>
#include<queue>

int main () {

    std:: queue<int> nums ;

    nums.push(50);
    nums.push(60);
    nums.push(70);
    nums.push(80);
    nums.push(90);

    while (!nums.empty()) {

          std:: cout <<nums.front() << std::endl;

          nums.pop();

    }
    
    return 0 ;
}