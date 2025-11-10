#include "Fixed.hpp"

const int Fixed::y = 8;

Fixed::Fixed() : x(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) {
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
} 

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
        this->x = other.getRawBits();
    return *this;
}



Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->x;
}


void Fixed::setRawBits(int const raw)
{
    this->x = raw;
}
