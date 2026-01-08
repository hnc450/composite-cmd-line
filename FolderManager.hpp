
#ifdef __FOLDER_MANAGER__
#define __FOLDER_MANAGER__
   #include "RessourceManager.hpp"
#endif


class FolderManager : public RessourceManager{

    protected:
       std::string m_folder_name = "test";
       std::string m_path = "Desktop";
       
    public:
       FolderManager();
       FolderManager(std::string folder = "test");
       FolderManager(std::string folder = "test" , std::string path = "Desktop");

       void create(std::string ressource) override;
       bool drop(std::string ressource) override;

}