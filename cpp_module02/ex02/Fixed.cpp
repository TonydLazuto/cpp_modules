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

Fixed::Fixed( Fixed const & src ) {
	*this = src;
}

Fixed&	Fixed::operator=( Fixed const & rhs ) {
	if (this != &rhs)
		this->_fixp = rhs._fixp;
	return *this;
}

std::ostream&	operator<<( std::ostream & o, Fixed const & src ) {
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

bool	Fixed::operator>( Fixed const & rhs ) {
	return this->_fixp > rhs.getRawBits();
}
bool	Fixed::operator<( Fixed const & rhs ) {
	return this->_fixp < rhs.getRawBits();
}
bool	Fixed::operator>=( Fixed const & rhs ) {
	return this->_fixp >= rhs.getRawBits();
}
bool	Fixed::operator<=( Fixed const & rhs ) {
	return this->_fixp <= rhs.getRawBits();
}
bool	Fixed::operator==( Fixed const & rhs ) {
	return this->_fixp == rhs.getRawBits();
}
bool	Fixed::operator!=( Fixed const & rhs ) {
	return this->_fixp != rhs.getRawBits();
}

float	Fixed::operator+( Fixed const & rhs ) {
	return this->toFloat() + rhs.toFloat();
}
float	Fixed::operator-( Fixed const & rhs ) {
	return this->toFloat() - rhs.toFloat();
}
float	Fixed::operator*( Fixed const & rhs ) {
	return this->toFloat() * rhs.toFloat();
}
float	Fixed::operator/( Fixed const & rhs ) {
	return this->toFloat() / rhs.toFloat();
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

Fixed&		min( Fixed & lhs, Fixed  & rhs ) {
	if (lhs < rhs)
		return lhs;
	return rhs;
}
const Fixed&	max( const Fixed & lhs, const Fixed & rhs ) {
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}
//  Fixed const&	min( Fixed & lhs, Fixed const & rhs ) {
// 	if (lhs.toFloat() < rhs.toFloat())
// 		return lhs;
// 	return rhs;
// }
// Fixed const&	max( Fixed const & lhs, Fixed const & rhs ) {
// 	if (lhs.toFloat() > rhs.toFloat())
// 		return lhs;
// 	return rhs;
// }
