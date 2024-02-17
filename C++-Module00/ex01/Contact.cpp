#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::setFirstName(std::string &fn)
{
    firstName = fn;
}

void Contact::setLastName(std::string &ln)
{
    lastName = ln;
}

void Contact::setNickName(std::string &nn)
{
    nickName = nn;
}

void Contact::setPhoneNumber(std::string &pn)
{
    phoneNumber = pn;
}

void Contact::setDarkestSecret(std::string &ds)
{
    darkestSecret = ds;
}

std::string Contact::getFirstName() const
{
    return firstName;
}

std::string Contact::getLastName() const
{
    return lastName;
}

std::string Contact::getNickName() const
{
    return nickName;
}

std::string Contact::getPhoneNumber() const
{
    return phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return darkestSecret;
}
