#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<cctype>


void composite();
void icone();
void maker(int &choice);

bool make_model();
bool make_view();
bool make_controller();
void printer_other_choice(std::vector<std::string> option);

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

void icone(){

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
           printer_other_choice({
            "Create a MVC architecture",
            "Create a MVVM architecture",
            "Create a MCCM architecture for api",
            "Create a React JS project with MCCM architecture for api"
          });
       break;
    }
}

bool make_model()
{
   std::string modelName;
   std::string modelFile;

   std::cout<<"Enter a Model name  >> ";
   std::cin>>modelName;

   if (!modelName.empty()) {
    modelName[0] = static_cast<char>(
        std::toupper(static_cast<unsigned char>(modelName[0]))
    );
   }

   modelFile = modelName +".php";
   std::ofstream model(modelFile), fichier("Model.php");

   if(fichier.is_open()){
     model<<"<?php "<<std::endl;
     model<<"class "<<modelName<<" extends Model{\n"<<std::endl;
     model<<"}\n"<<std::endl;
     model.close();
     fichier.close();
     return true;
   }
   else{
    return false;
   }

}

bool make_view()
{
  return true;
}
bool make_controller()
{
  return true;
}

void printer_other_choice(std::vector<std::string> option)
{
  size_t length =  option.size(); int increment = 0;

  for(int i ; i < length ; i++ ){
     increment = i + 1;
     std::cout<<'['<< increment<<']' <<option[i] <<std::endl;
  }
  
}