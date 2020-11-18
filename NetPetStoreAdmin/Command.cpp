#include "Command.h"
#include <iostream>
#include <fstream>
using namespace std;

Command::Command(){}
Command::~Command(){}
void Command::Addanimals(animals& animals)
{
	AnimalsRepository.Add(animals);
}


void Command::Writeanimals()
{
	AnimalsRepository.WriteToConsole();
}

string Command::GetMostPopularAnimalKinds(animals& animals)
{
	return AnimalsRepository.GetMostPopularAnimal(animals);
}

