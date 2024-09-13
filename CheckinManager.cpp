#include "CheckinManager.h"

int CheckinManager::inserirNumeroPresentes(int idReserva, int quantidade)
{
	CheckinDAO* checkinDao = DAOManager::getCheckinDao();
	Checkin* checkin = checkinDao->recuperar(idReserva);
	checkin->setNumeroPresentes(quantidade);
	checkinDao->atualizar(checkin);
	return 0;
}
