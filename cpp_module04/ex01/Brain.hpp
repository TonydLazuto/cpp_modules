#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain( void );
		~Brain( void );
		Brain(Brain const & src);
		Brain& operator=(Brain const & rhs);

		Brain( std::string _ideas[100]);

};

#endif