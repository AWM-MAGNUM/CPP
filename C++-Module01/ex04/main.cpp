#include "File.hpp"

int main(int argc,char **argv)
{
    if(argc != 4)
    {
        std::cout << "argument insufusante" << std::endl;
        return 1;
       
    }
    else
    {
        File myFile(argv[1]);
        if(myFile.OpenReadFile() != 0) 
        {
            std::cerr << "Erreur lors de l'ouverture du fichier." << std::endl;
            return 1;
        }
        myFile.ReplaceStr(argv[2], argv[3]);
        
        if(myFile.WriteFile() != 0) 
        {
            std::cerr << "Erreur lors de l'écriture du fichier." << std::endl;
            return 1;
        }
        std::cout << "Remplacement effectué avec succès!" << std::endl;
    }
}