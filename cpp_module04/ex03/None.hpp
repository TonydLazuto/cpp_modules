#ifndef NONE_HPP
# define NONE_HPP

# include "AMateria.hpp"

class None : public AMateria
{
	public:
		None( void );
		virtual ~None( void );
		None(None const & src);
		None& operator=(None const & rhs);

		virtual AMateria* 	clone() const;
};

#endif
