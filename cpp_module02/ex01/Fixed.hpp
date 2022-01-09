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

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<( std::ostream & o, Fixed const & rhs );

#endif