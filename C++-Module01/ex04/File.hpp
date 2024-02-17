#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <string>
#include <fstream>

class File {
private:
    std::string filename;
    std::string content;
public:
    int OpenReadFile();
    int ReplaceStr(const std::string &s1, const std::string &s2);
    int WriteFile();
    File(const std::string &fn);
};
#endif
