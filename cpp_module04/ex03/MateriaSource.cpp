#include "AMateria.hpp"
#include "IAmateria.hpp"
#include "Character.hpp"


MateriaSource::MateriaSource( void ) {
	std::cout << "Construct MateriaSource." << std::endl;
}
MateriaSource::MateriaSource( void ) {
	std::cout << "Construct MateriaSource." << std::endl;
}
MateriaSource::~MateriaSource( void ) {
	std::cout << "Destruct MateriaSource." << std::endl;
}
MateriaSource::MateriaSource(MateriaSource const & src) {
	*this = src;
}
MateriaSource& MateriaSource::operator=(MateriaSource const & rhs) {
	this->_type = src._type;
	return *this;
}

virtual void 		MateriaSource::learnMateria(AMateria*) override {
	
}
virtual AMateria* 	MateriaSource::createMateria(std::string const & type) override {

}