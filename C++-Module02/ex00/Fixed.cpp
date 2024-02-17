/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:54:03 by bel-kase          #+#    #+#             */
/*   Updated: 2023/11/04 17:12:03 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fb = 8;

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &p)
{
     std::cout << "Copy constructor called" << std::endl;
    *this = p;
}

Fixed &Fixed::operator=(const Fixed &p)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &p)
        value = p.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}