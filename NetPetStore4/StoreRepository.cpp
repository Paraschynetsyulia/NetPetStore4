#include "StoreRepository.h"
#include <fstream>
using namespace std;
template<class T>
StoreRepository<T>::StoreRepository(bool sync) : Repository(sync)
{
	ReadToFile();
}
template<class T>
StoreRepository<T>::~StoreRepository()
{
}
template<class T>
void StoreRepository<T>::ReadToFile()
{
	ifstream fin("Store.txt");
	int maxLen = 50;
	char* name = new char[maxLen],
		* address = new char[maxLen];
	while (!fin.eof())
	{
		fin.get(name, maxLen);
		fin.get();
		fin.get(address, maxLen);


		NetPetShop NetPetShop(name, address);
		Add(NetPetShop);
	}

	fin.close();

	delete[] name;
	delete[] address;

}
template<class T>
void StoreRepository<T>::WriteToFile()
{
	ofstream fout("Store.txt");

	for (int i = 0; i <= cur; i++)
	{
		NetPetShop* NetPetShopp = (NetPetShop*)data[i];

		fout << NetPetShopp->GetName() << ","
			<< NetPetShopp->GetAddress();

		if (i < cur)
			fout << endl;
	}

	fout.close();
}
template<class T>
bool StoreRepository<T>::Add(T& NetPetShopp)
{
	return Repository::Add(&NetPetShopp);
}
