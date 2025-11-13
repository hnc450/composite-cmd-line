#include<iostream>

void composite();
void icone();
void maker(int &choice);

bool make_model();
bool make_view();
bool make_controller();

void printer_other_choice();

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


void composite()
{
     icone();

     std::cout<<"[1] Create a model"<<std::endl;
     std::cout<<"[2] Create a view "<<std::endl;
     std::cout<<"[3] Create a controlloler" <<std::endl;
     std::cout<<"[4] Other ...."<<std::endl;
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

void maker(int &choice)
{
    switch(choice)
    {
       case 1:
          if(!make_model())
          {
            std::cout<<"Erreur lors de la creation du modele"<<std::endl;
          }
       break;
       case 2:
          if(!make_view())
          {
            std::cout<<"Erreur lors de la creation de la vue"<<std::endl;
          }
       break;
       case 3:
          if(!make_controller())
          {
            std::cout<<"Erreur lors de la creation du controller"<<std::endl;
          }
       break;

       case 4:
           printer_other_choice();
       break;
    }
}

bool make_model()
{
  return true;
}

bool make_view()
{
  return true;
}
bool make_controller()
{
  return true;
}

void printer_other_choice()
{


  std::cout<<"[1] Create a MVC architecture"<<std::endl;
  std::cout<<"[2] Create a MVVM architecture"<<std::endl;
  std::cout<<"[3] Create a MCCM architecture for api"<<std::endl;
  std::cout<<"[4] Create a React JS project with MCCM architecture for api"<<std::endl;

}