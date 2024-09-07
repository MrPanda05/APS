#include "DVOManager.h"



DVOManager::DVOManager()
{
	_reservaDvo = new ReservaDVO();
	_clienteDvo = new ClienteDVO();
}

DVOManager::~DVOManager()
{
	delete _reservaDvo;
	delete _clienteDvo;
}
