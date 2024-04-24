/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 00:41:07 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/24 20:14:53 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	nbr_fix = copy.getRawBits();
}

int Fixed::getRawBits( void ) const
{
   std::cout << "getRawbits member function called" << std::endl;
   return (this->nbr_fix);
}

void Fixed::setRawBits( int const raw )
{
	this->nbr_fix = raw;
}

Fixed::Fixed(const int copy)
{
	std::cout << "Int constructor called" << std::endl;
	this->nbr_fix = copy << bits;
}

Fixed::Fixed(const float cop)
{
	std::cout << "Float constructor called" << std::endl;
	this->nbr_fix = static_cast<int>(cop * (1 << bits));
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->setRawBits(copy.getRawBits());
	return(*this);
}

float Fixed::toFloat( void ) const
{
	 return(static_cast<float>(this->nbr_fix) / (1 << bits));
}

int Fixed::toInt( void ) const
{
	return (this->nbr_fix >> bits);
}

std::ostream& operator <<(std::ostream& os, const Fixed& act) 
{
	os << act.toFloat();
	return (os);
}

//Comparison operators

bool Fixed::operator==(Fixed const& copy)
{
	if (this->nbr_fix == copy.getRawBits())
		return (0);
	else
		return (1);
}

bool Fixed::operator>(Fixed const& copy)
{
	if (this->nbr_fix > copy.getRawBits())
		return(0);
	else
		return (1);
}

bool Fixed::operator<(Fixed const& copy)
{
	if (this->nbr_fix < copy.getRawBits())
		return(0);
	else
		return (1);
}

bool Fixed::operator>=(Fixed const& copy)
{
	if (this->nbr_fix >= copy.getRawBits())
		return(0);
	else
		return (1);
}

bool Fixed::operator<=(Fixed const& copy)
{
	if (this->nbr_fix <= copy.getRawBits())
		return(0);
	else
		return (1);
}

bool Fixed::operator!=(Fixed const& copy)
{
	if (this->nbr_fix != copy.getRawBits())
		return(0);
	else
		return (1);
}

//arithmetic operators

int Fixed::operator+(Fixed const&copy)
{
	return(this->nbr_fix + copy.getRawBits());
}

int Fixed::operator-(Fixed const&copy)
{
	return(this->nbr_fix + copy.getRawBits());
}

int Fixed::operator/(Fixed const&copy)
{
	return(this->nbr_fix + copy.getRawBits());
}

int Fixed::operator*(Fixed const&copy)
{
	return(this->nbr_fix + copy.getRawBits());
}

//increment and decrement operators

int Fixed::operator++(int n)
{
	return(this->nbr_fix += n);
}

int Fixed::operator+(int n)
{
	return(this->nbr_fix += n);
}

//https://learn.microsoft.com/fr-fr/cpp/cpp/increment-and-decrement-operator-overloading-cpp?view=msvc-170

