/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 23:46:45 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/17 17:25:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main (void)
{
    Fixed   a;
    Fixed   b(a);
    Fixed   c;
    
    c = b;
    
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
}
/*
int main() {
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << "a.getRawBits(): " << a.getRawBits() << std::endl;
    std::cout << "b.getRawBits(): " << b.getRawBits() << std::endl;
    std::cout << "c.getRawBits(): " << c.getRawBits() << std::endl;

    a.setRawBits(42 << 8);
    std::cout << a.getRawBits() << std::endl;
    a.setRawBits(50 << 8);
    std::cout << a.getRawBits() << std::endl;

    return 0;
}*/