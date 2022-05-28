#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < MATERIA_NUM; ++i)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& one)
{
	for (int i = 0; i < MATERIA_NUM; i++)
	{
		if (materias[i])
			materias[i] = one.materias[i]->clone();
		else
			materias[i] = NULL;
	}
}

MateriaSource&	MateriaSource::operator = (const MateriaSource& one)
{
	if (this != &one)
	{
		for (int i = 0; i < MATERIA_NUM; ++i)
		{
			delete materias[i];
			materias[i] = one.materias[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MATERIA_NUM; ++i)
		delete materias[i];
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (m)
	{
		for (int i = 0; i < MATERIA_NUM; ++i)
		{
			if (!materias[i])
			{
				materias[i] = m->clone();
				delete m;
				return;
			}
		}		
	}
	else
		std::cout << "failed to learn the materia" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MATERIA_NUM; i++)
	{
		if (materias[i] && (materias[i]->getType() == type))
			return materias[i]->clone();
	}
	std::cout << "failed to create the materia" << std::endl;
	return NULL;
}
