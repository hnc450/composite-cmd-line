#include"composite.hpp"

int main()
{

  composite();
  int choice = 0;

  std::cout<<""<<std::endl;
  std::cout<<" >> ";
  std::cin>>choice;

  maker(choice);

  return 0;
}
