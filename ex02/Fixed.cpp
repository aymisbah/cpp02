#include "Fixed.hpp"


const int Fixed::fcn = 8;

Fixed::Fixed() : x(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int n) {
    std::cout << "Int constructor called\n";
    x = n << fcn;
}

Fixed::Fixed(const float f) {
    std::cout << "Float constructor called\n";
    x = roundf(f * (1 << fcn));
}

Fixed::Fixed(const Fixed &nw) {
    std::cout << "Copy constructor called\n";
    *this = nw;
}

Fixed &Fixed::operator=(const Fixed &oj) {
    std::cout << "Copy assignment operator called\n";
    if (this != &oj)
        this->x = oj.x;
    return *this;
}


Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const {
    return this->x;
}

float Fixed::toFloat(void) const {
    return (float)x / (1 << fcn);
}

int Fixed::toInt(void) const {
    return x >> fcn;
}

bool Fixed::operator>(const Fixed &nw) 
{
    return (x > nw.x);
}
bool Fixed::operator<(const Fixed &nw) const
{
    return (x < nw.x);
}
bool Fixed::operator<=(const Fixed &nw) 
{
    return (x <= nw.x);
}
bool Fixed::operator>=(const Fixed &nw) 
{
    return (x >= nw.x);
}
bool Fixed::operator==(const Fixed &nw) 
{
    return (x == nw.x);
}
bool Fixed::operator!=(const Fixed &nw) 
{
    return (x != nw.x);
}

Fixed Fixed::operator+(const Fixed &i) const 
{
    return (Fixed(this->toFloat() + i.toFloat()));
}

Fixed Fixed::operator-(const Fixed &i) const {
    return (Fixed(this->toFloat() - i.toFloat()));
}


Fixed Fixed::operator*(const Fixed &i) const {
    Fixed s = this->toFloat() * i.toFloat(); 
    return s;
}

Fixed Fixed::operator/(const Fixed &i)  const
{
    return Fixed(this->toFloat() / i.toFloat());
}



Fixed &Fixed::operator++()
{
    this->x++;
    return (*this);
}


Fixed Fixed::operator++(int)
{
    Fixed curr(*this);
    this->x++;
    return (curr);
}

Fixed &Fixed::operator--()
{
    this->x--;
    return (*this);
}


Fixed Fixed::operator--(int)
{
    Fixed curr(*this);
    this->x--;
    return (curr);
}



Fixed &Fixed::min(Fixed &on,Fixed &tw)
{
    if (on < tw )
        return (on);
    else
        return (tw);
}

const Fixed &Fixed::min(const Fixed &on,const Fixed &tw)
{
    if (on < tw )
        return (on);
    else
        return (tw);
}




const Fixed &Fixed::max(const Fixed &on,const Fixed &tw)
{
    if (on < tw)
        return (tw);
    else
        return (on);
}

Fixed &Fixed::max( Fixed &on, Fixed &tw)
{
    if (on < tw)
        return (tw);
    else
        return (on);
}



std::ostream& operator<<(std::ostream &outpt, const Fixed &fx)
{
    outpt << fx.toFloat();
    return outpt;
}
