#ifndef COMMANDNET_H
#define COMMANDNET_H

#include"Store.h"
#include"Repository.h"
class CommandShop
{
	NetPetShop* NetPetShopp;
	int lastPetIndex;
	Repository<NetPetShop> NetPetShopRepository = Repository<NetPetShop>(true);
public:
	CommandShop();
	~CommandShop();

	void Addpetshop(NetPetShop&);

};

#endif 