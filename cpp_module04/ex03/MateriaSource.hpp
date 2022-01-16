#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		AMateria* _stock;

	public:
		
		MateriaSource( void );
		virtual ~MateriaSource( void );
		MateriaSource(MateriaSource const & src);
		MateriaSource& operator=(MateriaSource const & rhs);

		virtual void 		learnMateria(AMateria*) override;
		virtual AMateria* 	createMateria(std::string const & type) override;
};

#endif
