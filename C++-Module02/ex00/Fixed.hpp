/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:54:12 by bel-kase          #+#    #+#             */
/*   Updated: 2023/11/04 17:06:12 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private :
    int value;
    static const int fb;
public : 
    Fixed();
    Fixed(const Fixed &obj);
    Fixed &operator=(const Fixed &obj);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();
};
#endif