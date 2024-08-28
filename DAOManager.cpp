#include "DAOManager.h"

void DAOManager::setReservaDao(ReservaDAO* dao) {
	_reservaDao = dao;
}

void DAOManager::createReservaDao() {
	ReservaDAO* newReservaDao = new ReservaDAO(this);
	setReservaDao(newReservaDao);
}