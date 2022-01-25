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

		int			_res_convert[4];

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

		Cast( const char* arg );

		char	getValChar( void ) const;
		int		getValInt( void ) const;
		float	getValFloat( void ) const;
		double	getValDouble( void ) const;

		void	setValues(const char *av);
		void	print_result(const char *av) const;
};

#endif
