#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain*	_brain;
		
	public:
		Cat( void );
		virtual ~Cat( void );
		Cat(Cat const & src);
		Cat& operator=(Cat const & rhs);

		Cat( std::string type );

		void			makeSound(void) const;
		virtual Brain	*getBrain(void) const;
		std::string		getBrainIdea(int num) const;
		void			setBrainIdea(std::string idea, int num);
};

#endif
