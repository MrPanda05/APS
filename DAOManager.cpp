#include "DAOManager.h"

void DAOManager::setReservaDao(ReservaDAO* reservaDao){
	_reservaDao = reservaDao;
}
ReservaDAO* DAOManager::getReservaDao() {
	return _reservaDao;
}