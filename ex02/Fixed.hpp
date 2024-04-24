/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 00:54:10 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/24 20:13:32 by ogregoir         ###   ########.fr       */
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
Fixed& operator=(const Fixed &copy);

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
int operator++(int n);
int operator+(int n);
int operator--(int n);
int operator-(int n);



int getRawBits( void ) const;
void setRawBits( int const raw );
float toFloat( void ) const;
int toInt( void ) const;
static float min(float  &);

};

std::ostream& operator <<(std::ostream& os, const Fixed& act);

#endif