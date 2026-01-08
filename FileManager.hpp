#ifdef __FILE_MANAGER__
#define __FILE_MANAGER__

#endif

class FileManager: public RessourceMangager{
    protected:
        std::string m_file_name = "index";
        char m_extension[6] = ".php";
    public:
       FileManager();
      
       bool setNewExtension(char extension[6]);
       void create(std::string ressource) override;
       bool drop(std::string ressource) override;

        
};