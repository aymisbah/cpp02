#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>



class Fixed
{
    private :
        int x;
        static const int y;
    public :
        Fixed();
        Fixed(const Fixed &new_o);
        Fixed& operator=(const Fixed &nw);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};



#endif 