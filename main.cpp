#include<iostream>

void composite();
void icone();

int main()
{
  composite();
  return 0;
}


void composite()
{
     icone();

     std::cout<<"[1] Create a model"<<std::endl;
     std::cout<<"[2] Create a view "<<std::endl;
     std::cout<<"[3] Create a controlloler" <<std::endl;
     std::cout<<"[4] Other ....";
}

void icone()
{

          std::cout <<
R"(  ____ ___  __  __ ____   ___  ____ ___ _____ _____ 
 / ___/ _ \|  \/  |  _ \ / _ \/ ___|_ _|_   _| ____|
| |  | | | | |\/| | |_) | | | \___ \| |  | | |  _|  
| |__| |_| | |  | |  __/| |_| |___) | |  | | | |___ 
 \____\___/|_|  |_|_|    \___/|____/___| |_| |_____|
)" << std::endl;
}
