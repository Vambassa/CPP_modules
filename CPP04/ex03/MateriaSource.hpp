#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#define MATERIA_NUM 4

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource& one);
	MateriaSource&	operator=(const MateriaSource& one);
	virtual ~MateriaSource();

	virtual void		learnMateria(AMateria* m);
	virtual AMateria*	createMateria(std::string const & type);

private:
	AMateria*	materias[MATERIA_NUM];
};

#endif
