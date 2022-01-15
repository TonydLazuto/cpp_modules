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

		std::string		getIdeas(int num);
		void			setIdeas(std::string idea, int num);

};

#endif
