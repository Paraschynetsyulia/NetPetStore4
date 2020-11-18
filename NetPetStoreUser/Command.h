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


	void Writeanimals();
	
};

#endif 