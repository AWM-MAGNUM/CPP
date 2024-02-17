#ifndef HARL_2_0_HPP
#define HARL_2_0_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <map>

class Harl {
public:
    Harl();
    void complain(const std::string& level);
    ~Harl();
private:
    void debug();
    void info();
    void warning();
    void error();
};

#endif
