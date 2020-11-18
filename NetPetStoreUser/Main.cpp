#include "Animal.h"
#include "Command.h"
#include"Repository.h"
#include<string>
#include<iostream>
using namespace std;

void Menu()
{
	Command c;


	cout << "__________________*********PET STORE*******************________________________" << endl;

	animals a;
	int maxlen = 100;
	int maxlen1 = 100;
	char* kinds = new char[maxlen],
		* color = new char[maxlen],
		* streets = new char[maxlen],
		* breed = new char[maxlen];
	char* name = new char[maxlen1],
		* address = new char[maxlen1];

	while (true)
	{
		cout << "______<1>View all available products_____" << endl;
		cout << "_________________<0> - Exit__________" << endl;
		cout << "__________________Enter your selection_____________________" << endl;

		char choise;
		cin >> choise;

		bool exit = false;

		switch (choise)
		{
		case '1':
			c.Writeanimals();
			break;

		case '0':
			exit = true;
			break;
		default:
			break;
		}

		if (exit)
			break;

		cout << endl << endl;
	}
	delete[]kinds;
	delete[]breed;
	delete[]color;
	delete[]streets;
}

int main()
{
	Menu();
	system("pause");
	return 0;
}