#include<iostream>
#include<memory>

class Animal {

    public :

            void show () {

                std:: cout << "Animal is a good behavior okay \n";

            }

};

int main () {

  std::unique_ptr<Animal> ptr  = std::make_unique<Animal>() ;

  ptr->show();
  
  std::unique_ptr<Animal>ptr1;
  
  ptr1 = std::move(ptr);
  
  ptr1->show();

   std::cout << "Now trying to access moved ptr...\n";

  ptr->show();

  return 0;


}