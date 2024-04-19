#ifndef CANON_H
#define CANON_H

#pragma once
#include <string>
#include <iostream>

class Fixed {

private :

int                 nbr_fix;
static const int    bits = 8;

public :

Fixed( void );
Fixed(const Fixed &copy);
Fixed& operator=(const Fixed &copy);
~Fixed( void );
int getRawBits( void ) const;
void setRawBits( int const raw );
};

#endif