/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 00:41:07 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/23 01:22:03 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    if (this != &copy) 
        this->nbr_fix = copy.nbr_fix;
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
    if (this != &copy) 
        this->nbr_fix = copy.nbr_fix;
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