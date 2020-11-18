#include "Command.h"
#include <iostream>
#include <fstream>
using namespace std;

Command::Command() {}
Command::~Command() {}


void Command::Writeanimals()
{
	AnimalsRepository.WriteToConsole();
}





