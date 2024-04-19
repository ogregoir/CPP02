/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 00:08:51 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/19 00:18:33 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Canon.hpp"

Canon::Canon( void )
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Canon::~Canon( void )
{
    std::cout << " : Destructor called" << std::endl;
    return;
}