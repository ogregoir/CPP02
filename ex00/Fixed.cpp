/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 00:08:51 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/21 17:28:24 by marvin           ###   ########.fr       */
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
    nbr_fix = copy.getRawBits() << bits;
}

int Fixed::getRawBits( void ) const
{
   std::cout << "getRawbits member function called" << std::endl;
   return (this->nbr_fix >> bits);
}

Fixed& Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignement operator called" << std::endl;
    this->setRawBits(copy.getRawBits());
    return(*this);
}

void Fixed::setRawBits( int const raw )
{
    this->nbr_fix = raw << bits;
}