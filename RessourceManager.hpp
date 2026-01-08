#ifdef __RESSOURCE_MANAGER__
#define ___RESSOURCE_MANAGER__

#endif

class RessourceManager{
    public:
        virtual void create(std::string ressource) ;
        virtual bool drop(std::string ressource);
};
