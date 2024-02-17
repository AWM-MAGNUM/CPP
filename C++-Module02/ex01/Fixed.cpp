/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:04:25 by bel-kase          #+#    #+#             */
/*   Updated: 2023/11/05 11:55:42 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fb = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(const int iValue)
{
    std::cout << "Int constructor called" << std::endl;
    value = iValue << fb;
}

Fixed::Fixed(const float fValue)
{
    std::cout << "Float constructor called" << std::endl;
    value = roundf(fValue * (1 << fb));
}

float Fixed::toFloat() const
{
    return (float)value / (1 << fb);
}

int Fixed::toInt() const
{
    return value >> fb;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &obj)
        value = obj.value;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f) 
{
    out << f.toFloat();
    return out;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}