/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 00:54:10 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/06 16:48:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <string>
# include <iostream>
# include <math.h>

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
int getRawBits( void ) const;
void setRawBits( int const raw );
Fixed& operator=(const Fixed &copy);
int toInt( void ) const;
float toFloat( void ) const;


//Comparison operators
bool operator==(Fixed const& copy) const;
bool operator>(Fixed const& copy) const;
bool operator<(Fixed const& copy) const;
bool operator>=(Fixed const& copy) const;
bool operator<=(Fixed const& copy) const;
bool operator!=(Fixed const& copy) const;

//arithmetic operators
Fixed operator+(Fixed const&copy) const;
Fixed operator-(Fixed const&copy) const;
Fixed operator/(Fixed const&copy) const;
Fixed operator*(Fixed const&copy) const;

//increment and decrement operators
Fixed& operator++();
Fixed operator++(int n);
Fixed& operator--();
Fixed operator--(int n);

static       Fixed &min(Fixed &a, Fixed &b);
static const Fixed &min(const Fixed &a, const Fixed &b);

static Fixed       &max(Fixed &a, Fixed &b);
static const Fixed &max(const Fixed &a, const Fixed &b);


};

std::ostream& operator <<(std::ostream& os, const Fixed& act);
