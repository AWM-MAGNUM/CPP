#include "File.hpp"

int File::OpenReadFile()
{
    std::ifstream input(filename);
    if(!input.is_open())
        return -1;
    std::string line;
    bool firstLine = true;
    while (std::getline(input, line))
    {
        if(!firstLine)
            content += '\n';
        content += line;
        firstLine = false;
    }
    input.close();
    return 0;
}

int File::ReplaceStr(const std::string &s1, const std::string &s2)
{
     if(s1.empty()) 
        return 0;
    size_t pos = 0;
    while((pos = content.find(s1, pos)) != std::string::npos)
    {
        content.erase(pos,s1.length());
        content.insert(pos, s2);
        pos+= s2.length();
    }
    return 0;
}

int File::WriteFile()
{
    std::string newfilename = filename + ".replace";
    std::ofstream outFile(newfilename);
    if (!outFile.is_open()) 
    {
        std::cerr << "Erreur lors de l'ouverture du fichier pour écriture." << std::endl;
        return -1;
    }
    outFile << content;
    outFile.close();
    return 0;
}

File::File(const std::string &fn) : filename(fn) {}