#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal, Brain
{
	private:
		Brain*	_brain;
		
	public:
		Dog( void );
		~Dog( void );
		Dog(Dog const & src);
		Dog& operator=(Dog const & rhs);

		Dog( std::string type );

		void	makeSound(void) const;
};

#endif