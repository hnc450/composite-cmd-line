#include"composite.hpp"
std::string termux = "";
void terminal(std::string cmd)
{
     system(cmd.c_str()); 
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
            "Other"
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
  std::string viewName = "index.php";
  char choice = 'y';


  printer_other_choice
  ({
      "vue par defaut index (y)",
      "creer une vue au choix (n)",
   }
   );

   std::cout<<" >>: ";
   std::cin>>choice;

   switch(choice)
   { 
       case 'y':

          termux = "touch " + viewName;
          terminal(termux);

          return true;
       case 'n':
             std::cout<<"Nom de la view : ";
             std::cin>>viewName;
             viewName = viewName +".php";

             termux = "touch " + viewName;
     
           terminal(termux);
           return true;
    
        default:
        return false;

   }
  return false;

}

bool make_controller()
{

   std::string controllerName = "",  controllerlFile = "";
 
   std::cout<<"Enter a Controller name  >> ";
   std::cin>>controllerName;

   if (!controllerName.empty()) {
    controllerName[0] = static_cast<char>(
        std::toupper(static_cast<unsigned char>(controllerName[0]))
    );
   }

   controllerlFile= controllerName +".php";
   std::ofstream controller(controllerlFile), fichier("Controller.php");

   if(fichier.is_open()){
     controller<<"<?php "<<std::endl;
     controller<<"class "<<controllerName<<" extends Controllerr{\n"<<std::endl;
     controller<<"}\n"<<std::endl;
     controller.close();
     fichier.close();
     return true;
   }
   else{
    return false;
   }
}

void printer_other_choice(std::vector<std::string> option)
{
  for(int i = 0 ; i <  option.size() ; i++ ){
     std::cout<<'['<< i + 1 <<']' <<option[i] <<std::endl;
  }
  
}