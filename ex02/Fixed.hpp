/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 00:54:10 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/25 13:55:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

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
int getRawBits( void ) const;
void setRawBits( int const raw );
Fixed& operator=(const Fixed &copy);
int toInt( void ) const;
float toFloat( void ) const;


//Comparison operators
bool operator==(Fixed const& copy);
bool operator>(Fixed const& copy);
bool operator<(Fixed const& copy);
bool operator>=(Fixed const& copy);
bool operator<=(Fixed const& copy);
bool operator!=(Fixed const& copy);

//arithmetic operators
int operator+(Fixed const&copy);
int operator-(Fixed const&copy);
int operator/(Fixed const&copy);
int operator*(Fixed const&copy);

//increment and decrement operators
Fixed& operator++();
Fixed operator++(int n);
Fixed& operator--();
Fixed operator--(int n);

static Fixed  &min(Fixed &a, Fixed &b);
static Fixed  &min(const Fixed &a, const Fixed &b);

static Fixed  &max(Fixed &a, Fixed &b);
static Fixed  &max(const Fixed &a, const Fixed &b);


};

std::ostream& operator <<(std::ostream& os, const Fixed& act);

#endif