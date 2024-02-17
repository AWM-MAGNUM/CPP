/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:37:19 by bel-kase          #+#    #+#             */
/*   Updated: 2023/11/05 12:00:07 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fb = 8;

Fixed::Fixed()
{
    // std::cout << "Default constructor Called" << std::endl;
    value = 0;
}

Fixed::Fixed(const int iValue)
{
    // std::cout << "int constructor Called" << std::endl;
    value = iValue << fb;
}

Fixed::Fixed(const float fValue)
{
    // std::cout << "Float constructor called" << std::endl;
    value = roundf(fValue * (1 << fb));
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const
{
    return value >> fb;
}

float Fixed::toFloat() const
{
    return (float)value / (1 << fb);
}

bool Fixed::operator>(const Fixed &obj) const 
{
    return this->value > obj.value;
}

bool Fixed::operator<(const Fixed &obj) const 
{
    return this->value < obj.value;
}

bool Fixed::operator>=(const Fixed &obj) const
{
    return this->value >= obj.value;
}

bool Fixed::operator<=(const Fixed &obj) const
{
    return this->value <= obj.value;
}

bool Fixed::operator==(const Fixed &obj) const
{
    return this->value == obj.value;
}

bool Fixed::operator!=(const Fixed &obj) const
{
    return this->value != obj.value;
}

Fixed Fixed::operator+(const Fixed &obj) const
{
    Fixed result;
    result.value = this-> value + obj.value;
    return result;
}

Fixed Fixed::operator-(const Fixed &obj) const
{
    Fixed result;
    result.value = this->value - obj.value;
    return result;
}

Fixed Fixed::operator*(const Fixed &obj) const
{   
    Fixed result;
    result.value = (this->value * obj.value) >> fb;
    return result;
}

Fixed Fixed::operator/(const Fixed &obj) const
{
    if (obj.value == 0) 
    {
        std::cerr << "Error: Division by zero!" << std::endl;
        return *this; // Ou retourner une valeur par défaut
    }
    Fixed result;
    result.value = (this->value << fb) / obj.value;
    return result;       
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return out;
}

Fixed &Fixed::operator++()
{
    this->value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->value++;
    return temp;
}
Fixed &Fixed::operator--()
{
    this->value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->value--;
    return temp;
}
    
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    else
        return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if(a < b)
        return a;
    else
        return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    else
        return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if(a < b)
        return a;
    else
        return b;
}