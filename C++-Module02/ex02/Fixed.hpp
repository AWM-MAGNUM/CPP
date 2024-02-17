/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:37:17 by bel-kase          #+#    #+#             */
/*   Updated: 2023/11/05 11:59:14 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int fb;
public:
    Fixed();
    Fixed(const int iValue);
    Fixed(const float fValue);
    ~Fixed();
    int toInt(void) const;
    float toFloat(void) const;
    bool operator>(const Fixed &obj) const ;
    bool operator<(const Fixed &obj) const ;
    bool operator>=(const Fixed &obj) const ;
    bool operator<=(const Fixed &obj) const ;
    bool operator==(const Fixed &obj) const ;
    bool operator!=(const Fixed &obj) const ;
    Fixed operator+(const Fixed &obj) const ;
    Fixed operator-(const Fixed &obj) const ;
    Fixed operator*(const Fixed &obj) const ;
    Fixed operator/(const Fixed &obj) const ;
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);
    static const Fixed &max(const Fixed &a, const Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static Fixed& min(Fixed &a, Fixed &b);
};
    std::ostream &operator<<(std::ostream &out, const Fixed &obj);
#endif