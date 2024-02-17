/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:05:29 by bel-kase          #+#    #+#             */
/*   Updated: 2023/11/04 17:13:16 by bel-kase         ###   ########.fr       */
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
    Fixed(const Fixed &obj);
    Fixed &operator=(const Fixed &obj);
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
};
    std::ostream &operator<<(std::ostream &out, const Fixed &f);
#endif 