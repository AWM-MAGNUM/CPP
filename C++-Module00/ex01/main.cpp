#include "PhoneBook.hpp"
#include "Contact.hpp"

int PhoneBook::getCurrentCount() const 
{
    return current;
}

int is_num(const std::string &str)
{
    size_t i = 0;
    while(i < str.length())
    {
        if(!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1 ;
}

void    loop_add(PhoneBook &phonebook)
{
    std::string fn, ln, nn, phn, ds;
    do 
    {
        if (std::cin.eof()) 
        {
            std::cout << "EOF detected!" << std::endl;
            exit(0);
        }
        std::cout << "Enter first name: ";
        std::getline(std::cin, fn);
    } 
    while (fn.empty());
    do 
    {
        if (std::cin.eof()) 
        {
            std::cout << "EOF detected!" << std::endl;
            exit(0);
        }
        std::cout << "Enter last name: ";
        std::getline(std::cin, ln);
    } 
    while (ln.empty());
    do 
    {
        if (std::cin.eof()) 
        {
            std::cout << "EOF detected!" << std::endl;
            exit(0);
        }
        std::cout << "Enter nickname: ";
        std::getline(std::cin, nn);
    } 
    while (nn.empty());
    do 
    {
        if (std::cin.eof()) 
        {
            std::cout << "EOF detected!" << std::endl;
            exit(0);
        }
        std::cout << "Enter phone number: ";
        std::getline(std::cin, phn);
    } 
    while (phn.empty() || !is_num(phn));
    do
    {
        if (std::cin.eof()) 
        {
            std::cout << "EOF detected!" << std::endl;
            exit(0);
        }
        std::cout << "Enter darkest secret: ";
        std::getline(std::cin, ds);
    } 
    while (ds.empty());
    phonebook.addContact(fn, ln, nn, phn, ds);
}

int main() 
{
    PhoneBook phoneBook;
    std::string command;
    std::string index_str;
    int index = 0;

    while (1) 
    {
        std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
        std::cout << "* ";
        std::getline(std::cin, command);

        if (std::cin.eof()) 
        {
            std::cout << "EOF detected!" << std::endl;
            exit(0);
        }
        if (command == "ADD") 
            loop_add(phoneBook);
        else if (command == "SEARCH") 
        {
            bool validIndex = false;
            phoneBook.displayContacts();

            while (!validIndex) 
            {
                if (std::cin.eof()) 
                {
                    std::cout << "EOF detected!" << std::endl;
                    exit(0);
                }
                std::cout << "Enter the index of the contact to display: ";
                std::getline(std::cin, index_str);

                if (is_num(index_str))
                {
                    index = atoi(index_str.c_str());
                    if (index >= 1 && index <= phoneBook.getCurrentCount()) 
                        validIndex = true;
                    else 
                        std::cout << "Index out of range Please enter a valid index" << std::endl;
                }
                else 
                    std::cout << "Please enter a valid number" << std::endl;
            }
            phoneBook.displayContactDetails(index);
        }
        else if (command == "EXIT") 
            break;
        else 
            std::cout << "Unknown command!" << std::endl;
    }
    return 0;
}
