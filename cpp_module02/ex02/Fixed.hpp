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
		Fixed( Fixed const & src );
		~Fixed( void );
		Fixed& operator=( Fixed const & rhs );

		bool 				operator>( Fixed const & rhs );
		bool 				operator<( Fixed const & rhs );
		bool 				operator>=( Fixed const & rhs );
		bool 				operator<=( Fixed const & rhs );
		bool 				operator==( Fixed const & rhs );
		bool 				operator!=( Fixed const & rhs );

		float	 			operator+( Fixed const & rhs );
		float 				operator-( Fixed const & rhs );
		float				operator*( Fixed const & rhs );
		float				operator/( Fixed const & rhs );

		Fixed&				operator++( void );
		Fixed				operator++( int );
		Fixed& 				operator--( void );
		Fixed				operator--( int );

		static Fixed&		min( Fixed & lhs, Fixed  & rhs );
		static const Fixed&	max( const Fixed & lhs, const Fixed & rhs );
		// static Fixed const&	min( Fixed const & lhs, Fixed const & rhs );
		// static Fixed const&	max( Fixed const & lhs, Fixed const & rhs );

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
};

std::ostream&	operator<<( std::ostream & o, Fixed const & rhs );

#endif
