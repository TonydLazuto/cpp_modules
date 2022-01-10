#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class  Fixed {
	private:

		int					_fixp;
		static const int	_bits = 8;

	public:
	
		Fixed( void );
		Fixed( const int nb );
		Fixed( const float nb );
		Fixed( const Fixed & src );
		~Fixed( void );
		Fixed& operator=( const Fixed & rhs );

		bool 				operator>( const Fixed & rhs );
		bool 				operator<( const Fixed & rhs );
		bool 				operator>=( const Fixed & rhs );
		bool 				operator<=( const Fixed & rhs );
		bool 				operator==( const Fixed & rhs );
		bool 				operator!=( const Fixed & rhs );

		Fixed	 			operator+( const Fixed & rhs );
		Fixed 				operator-( const Fixed & rhs );
		Fixed				operator*( const Fixed & rhs );
		Fixed				operator/( const Fixed & rhs );

		Fixed&				operator++( void );
		Fixed				operator++( int );
		Fixed& 				operator--( void );
		Fixed				operator--( int );

		// static Fixed&		min( Fixed & lhs, Fixed  & rhs );
		static const Fixed&	max( const Fixed &nb1, const Fixed &nb2 );
		// static const Fixed&	min( const Fixed & lhs, const Fixed & rhs );
		// static const Fixed&	max( const Fixed & lhs, const Fixed & rhs );

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
};

std::ostream&	operator<<( std::ostream & o, const Fixed & rhs );

#endif
