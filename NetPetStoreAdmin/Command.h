#ifndef COMMAND_H
#define COMMAND_H

#include"Animal.h"
#include"Repository.h"

class Command
{
	Repository<animals> AnimalsRepository = Repository<animals>(true);

public:
	Command();
	~Command();

	void Addanimals(animals&);
	void Writeanimals();
	string GetMostPopularAnimalKinds(animals&);

};

#endif 
