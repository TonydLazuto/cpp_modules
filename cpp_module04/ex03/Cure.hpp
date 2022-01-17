#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		virtual ~Cure( void );
		Cure(Cure const & src);
		Cure& operator=(Cure const & rhs);

		virtual AMateria* 	clone() const override;
		// virtual void 		use(ICharacter const& target) override;
};

#endif