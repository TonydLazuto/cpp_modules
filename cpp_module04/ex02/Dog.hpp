#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain*	_brain;
		
	public:
		Dog( void );
		virtual ~Dog( void );
		Dog(Dog const & src);
		Dog& operator=(Dog const & rhs);

		Dog( std::string type );

		void			makeSound(void) const;
		virtual Brain	*getBrain(void) const;
		std::string		getBrainIdea(int num) const;
		void			setBrainIdea(std::string idea, int num);
};

#endif
