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

		Cast( void );
		
	public:
		virtual ~Cast( void );
		Cast(Cast const & src);
		Cast& operator=(Cast const & rhs);

		Cast( int type );

		enum type_detect {
			DT_CHAR,
			DT_INT,
			DT_FLOAT,
			DT_DOUBLE
		};

		static int	getType(const char *av, int type);
		void		Cast::print_result(void) const
};

std::ostream&	operator<<(std::ostream &o, const Cast &src);

#endif
