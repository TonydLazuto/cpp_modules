#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixp(0) {
}

Fixed::Fixed( const int nb ) {
	this->_fixp = nb << Fixed::_bits;
}

Fixed::Fixed( const float nb ) {
	this->setRawBits((int)(roundf(nb * (1 << Fixed::_bits))));
}	

Fixed::~Fixed( void ) {
}

Fixed::Fixed( const Fixed & src ) {
	*this = src;
}

Fixed&	Fixed::operator=( const Fixed & rhs ) {
	if (this != &rhs)
		this->_fixp = rhs._fixp;
	return *this;
}

std::ostream&	operator<<( std::ostream & o, const Fixed & src ) {
	o << src.toFloat();
	return o;
}

int		Fixed::getRawBits(void) const {
	return this->_fixp;
}

void 	Fixed::setRawBits(int const raw) {
	this->_fixp = raw;
}

float 	Fixed::toFloat( void ) const {
	float val = (float)this->getRawBits() / (float)(1 << Fixed::_bits);
	return val;
}

int		Fixed::toInt( void ) const {
	int val = this->getRawBits() >> Fixed::_bits;
	return val;
}

bool	Fixed::operator>( const Fixed & rhs ) {
	return (this->_fixp > rhs.getRawBits());
}
bool	Fixed::operator<( const Fixed & rhs ) {
	return (this->_fixp < rhs.getRawBits());
}
bool	Fixed::operator>=( const Fixed & rhs ) {
	return (this->_fixp >= rhs.getRawBits());
}
bool	Fixed::operator<=( const Fixed & rhs ) {
	return (this->_fixp <= rhs.getRawBits());
}
bool	Fixed::operator==( const Fixed & rhs ) {
	return (this->_fixp == rhs.getRawBits());
}
bool	Fixed::operator!=( const Fixed & rhs ) {
	return (this->_fixp != rhs.getRawBits());
}

Fixed	Fixed::operator+( const Fixed & rhs ) {
	this->setRawBits(this->toFloat() + rhs.toFloat());
	return (*this);
}
Fixed	Fixed::operator-( const Fixed & rhs ) {
	this->setRawBits(this->toFloat() - rhs.toFloat());
	return (*this);
}
Fixed	Fixed::operator*( const Fixed & rhs ) {
	this->setRawBits(this->toFloat() * rhs.toFloat());
	return (*this);
}
Fixed	Fixed::operator/( const Fixed & rhs ) {
	this->setRawBits(this->toFloat() / rhs.toFloat());
	return (*this);
}

Fixed&	Fixed::operator++( void ) {
	this->_fixp++;
	return *this;
}
Fixed	Fixed::operator++( int ) {
	Fixed	tmp = *this;
	++*this;
	return tmp;
}
Fixed& 	Fixed::operator--( void ) {
	this->_fixp--;
	return *this;
}
Fixed	Fixed::operator--( int ) {
	Fixed	tmp = *this;
	--*this;
	return tmp;
}

// Fixed&		min( Fixed & lhs, Fixed  & rhs ) {
// 	if (lhs < rhs)
// 		return lhs;
// 	return rhs;
// }
// const Fixed&	max( const Fixed &nb1, const Fixed &nb2 ) {
// 	if (nb1 > nb2)
// 		return (nb1);
// 	return (nb2);
// }
//  const Fixed&	min( Fixed & lhs, const Fixed & rhs ) {
// 	if (lhs.toFloat() < rhs.toFloat())
// 		return lhs;
// 	return rhs;
// }
// const Fixed&	max( const Fixed & lhs, const Fixed & rhs ) {
// 	if (lhs.toFloat() > rhs.toFloat())
// 		return lhs;
// 	return rhs;
// }
