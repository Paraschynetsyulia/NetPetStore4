#include"Repository.h"
template <class T>
Repository<T>::Repository(bool sync) {
	this->sync = sync;
	n = 50;
	data = new T[n];
	cur = -1;
	ReadFromFile();
}
template <class T>
Repository<T>::~Repository() {
	WriteToFile();
	delete[]data;
}
template <class T>
bool Repository<T>::Add(T&rep) {
	data[++cur] = rep;
	if (sync)
		WriteToFile();
	return true;
}