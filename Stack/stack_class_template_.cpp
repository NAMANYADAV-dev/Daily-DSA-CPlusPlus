#include<iostream>
#include<vector>
#include<string>

template<class T>
class stack {

    public:

        std::vector<T> vec;

    
       void  push(T val) {

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


        T last() {

            int lastIndex = vec.size() - 1;

            return vec[lastIndex];

        }

};

int main () {

    stack<std::string> s;
    s.push("Naman");
    s.push("Yadav");
    s.push("shivam");
    
    s.display();

    std:: cout << s.last() << std::endl;
    return 0 ;
}