/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 00:41:07 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/17 17:33:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	//std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	//std::cout << "Copy constructor called" << std::endl;
	nbr_fix = copy.getRawBits();
}

int Fixed::getRawBits( void ) const
{
   //std::cout << "getRawbits member function called" << std::endl;
   return (this->nbr_fix);
}

void Fixed::setRawBits( int const raw )
{
	this->nbr_fix = raw;
}

Fixed::Fixed(const int copy)
{
	//std::cout << "Int constructor called" << std::endl;
	this->nbr_fix = copy << bits;
}

Fixed::Fixed(const float cop)
{
	//std::cout << "Float constructor called" << std::endl;
	this->nbr_fix = roundf(cop * (1 << this->bits));
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
		this->setRawBits(copy.getRawBits());
	//std::cout << "Copy assignement operator called" << std::endl;
	return(*this);
}

float Fixed::toFloat( void ) const
{
	 return(static_cast<float>(this->nbr_fix) / (1 << this->bits));
}

int Fixed::toInt( void ) const
{
	return (this->nbr_fix >> this->bits);
}

std::ostream& operator <<(std::ostream& os, const Fixed& act) 
{
	os << act.toFloat();
	return (os);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return(b);
	else
		return(a);
	
}

Fixed const&	Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return(b);
	else
		return(a);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return(a);
	else
		return(b);
}

Fixed const&	Fixed::max(Fixed const  &a, Fixed const &b)
{
	if (a > b)
		return(a);
	else
		return(b);
}

//Comparison operators

bool Fixed::operator==(Fixed const& copy) const
{
	return (this->nbr_fix == copy.getRawBits());
}

bool Fixed::operator>(Fixed const& copy) const
{
	return (this->nbr_fix > copy.getRawBits());
}

bool Fixed::operator<(Fixed const& copy) const
{
	return (this->nbr_fix < copy.getRawBits());
}

bool Fixed::operator>=(Fixed const& copy) const
{
	return (this->nbr_fix >= copy.getRawBits());
}

bool Fixed::operator<=(Fixed const& copy) const
{
	return (this->nbr_fix <= copy.getRawBits());
}

bool Fixed::operator!=(Fixed const& copy) const
{
	return (this->nbr_fix != copy.getRawBits());
}

//arithmetic operators

Fixed Fixed::operator+(Fixed const&copy) const
{
	return(this->toFloat() + copy.toFloat());
}

Fixed Fixed::operator-(Fixed const&copy) const
{
	return(this->toFloat() - copy.toFloat());
}

Fixed Fixed::operator/(Fixed const&copy) const
{
	return(this->toFloat() / copy.toFloat());
}

Fixed Fixed::operator*(Fixed const&copy) const
{
	return(this->toFloat() * copy.toFloat());
}

//increment and decrement operators

Fixed& Fixed::operator++()
{
	this->nbr_fix++;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp;
	
	tmp = (*this);
	this->nbr_fix++;
	return(tmp);
}

Fixed& Fixed::operator--()
{
	this->nbr_fix--;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp;
	
	tmp = (*this);
	this->nbr_fix--;
	return(tmp);
}


