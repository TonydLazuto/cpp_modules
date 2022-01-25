#ifndef CAST_HPP
# define CAST_HPP

#include <iostream>

class Cast
{
	private:

		char		_val_char;
		int			_val_int;
		float		_val_float;
		double		_val_double;

		int			_type;

		enum type_detect {
			DT_CHAR,
			DT_INT,
			DT_FLOAT,
			DT_DOUBLE
		};

		Cast( void );
		
	public:
		virtual ~Cast( void );
		Cast(Cast const & src);
		Cast& operator=(Cast const & rhs);

		Cast( char* arg );

		char	getValChar( void ) const;
		int		getValInt( void ) const;
		float	getValFloat( void ) const;
		double	getValDouble( void ) const;

		void	setType(char *av);
		// void		Cast::print_result(void) const
};

std::ostream&	operator<<(std::ostream &o, Cast const & src);

#endif
