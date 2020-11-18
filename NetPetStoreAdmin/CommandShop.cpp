#include "CommandShop.h"
#include "Store.h"
#include <iostream>
#include <fstream>
using namespace std;

CommandShop::CommandShop()
{
}

CommandShop::~CommandShop()
{
}

void CommandShop::Addpetshop(NetPetShop& NetPetShop)
{
	NetPetShopRepository.Add(NetPetShop);
}
