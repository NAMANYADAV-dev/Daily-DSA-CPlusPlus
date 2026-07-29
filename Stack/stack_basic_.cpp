#include<iostream>
#include<vector>


class stack {

    public:

        std::vector<int> vec;

    
       void  push(int val) {

            vec.push_back(val);

        }


        void display() {

             for(auto&x : vec) {

                    std:: cout << x << " " ;

             }

             std::cout<<std::endl;

        }


        void pop() {

            vec.pop_back();

        }


        int last() {

            int lastIndex = vec.size() - 1;

            return vec[lastIndex];

        }

};

int main () {

    stack s;
    s.push(10);
    s.push(9);
    s.push(8);
    
    s.display();

    std:: cout << s.last() << std::endl;
    return 0 ;
}