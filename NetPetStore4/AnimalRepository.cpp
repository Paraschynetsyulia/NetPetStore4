#include "AnimalRepository.h"
#include<fstream>
using namespace std;
template<class T>
AnimalRepository<T>::AnimalRepository(bool sync) : Repository(sync)
{
	ReadToFile();
}
template<class T>
AnimalRepository<T>::~AnimalRepository()
{

}
template<class T>
bool AnimalRepository<T>::Add(T& animal)
{
	return Repository::Add(&animal);
}
template<class T>
void AnimalRepository<T>::ReadToFile()
{
	ifstream fin("Animal.txt");

	int maxLen = 50;
	char* kinds = new char[maxLen],
		* model = new char[maxLen],
		* color = new char[maxLen],
		* amount = new char[maxLen],
		* pricee = new char[maxLen],
		* street = new char[maxLen];

	char delim = ',';
	while (!fin.eof())
	{
		fin.get(kinds, maxLen, delim);
		fin.get();
		fin.get(model, maxLen, delim);
		fin.get();
		fin.get(color, maxLen, delim);
		fin.get();
		fin.get(amount, maxLen, delim);
		fin.get();
		fin.get(pricee, maxLen, delim);
		fin.get();
		fin.getline(street, maxLen);
		animals* animal = new animals(kinds, model, color, atoi(amount), atoi(pricee), street);
		Add(*animal);
	}

	fin.close();


}
template<class T>
void AnimalRepository<T>::WriteToFile()
{
	ofstream fout("Animal.txt");

	for (int i = 0; i <= cur; i++)
	{
		animals* animal = (animals*)data[i];

		fout << animal->Getkinds() << ","
			<< animal->GetModel() << ","
			<< animal->GetColor() << ","
			<< animal->Getamount() << ","
			<< animal->Getpricee() << ","
			<< animal->Getstreet();

		if (i < cur)
			fout << endl;
	}

	fout.close();
}