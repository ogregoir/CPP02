/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:01:15 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/17 17:26:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <string>
# include <iostream>

class Fixed {

private :

    int                 nbr_fix;
    static const int    bits = 8;

public :

    Fixed( void );
    ~Fixed( void );
    Fixed(const int copy);
    Fixed(const float cop);
    Fixed(const Fixed &copy);
    Fixed& operator=(const Fixed &copy);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

};

std::ostream& operator <<(std::ostream& os, const Fixed& act);
