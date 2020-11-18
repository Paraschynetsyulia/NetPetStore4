#pragma once
#include"Repository.h"
#include"Store.h"
template<class T>
class StoreRepository :public Repository<T> {
public:
	StoreRepository(bool sync = 0);
	~StoreRepository();
	void ReadToFile();
	void WriteToFile();
	bool Add(T& t);

};
