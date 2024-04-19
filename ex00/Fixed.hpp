#ifndef CANON_H
#define CANON_H

#pragma once
#include <string>
#include <iostream>

class Canon {

private :

int         nbr_fix;
const int   bits = 8; 

public :

Canon( void );
Canon::Canon(const Canon&);
Canon& Canon::operator=(const Canon&);
~Canon( void );
int getRawBits( void ) const;
void setRawBits( int const raw );
};

#endif