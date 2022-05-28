#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: virtual public AMateria
{
public:
	Ice();
	Ice(const Ice& one);
	Ice&	operator = (const Ice& one);
	virtual ~Ice();

	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);
};

#endif
