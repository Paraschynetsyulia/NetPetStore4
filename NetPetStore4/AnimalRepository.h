#pragma once
#include"Repository.h"
#include"Animal.h"
class AnimalRepository :public Repository<animal> {
public:
	AnimalRepository(bool sync = false);
	~AnimalRepository();
	bool Add(T&t);
	void ReadToFile();
	void WriteToFile();

};

