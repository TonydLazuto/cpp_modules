#ifndef _KAREN_HPP_
# define _KAREN_HPP_
# include <iostream>

class Karen {

	private :

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public :

		Karen( void );
		~Karen( void );

		void	complain( std::string level );
};

#endif