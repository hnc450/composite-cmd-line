#include "FileManager.hpp"
#include "composite.hpp"

FileManager::FileManager(){};

bool FileManager::setNewExtension(char extension[6]){
    std::size_t  longueur = extension;

    if(longueur > 0)
    {
       this->m_extension  = extension;
       return true;
    }
    return false;
  
};

void FileManager::create(std::string ressource)
{
    terminal('touch '+ressource+this->m_extension);
};

bool FileManager::drop(std::string ressource)
{
    terminal('rm -r ' + ressource + this->m_extension) 
    return true;
}