#include "ReservaManager.h"


//Reserva ReservaManager::pesquisarReserva(int reservaId, std::string nomeClient) {
//
//}
//Reserva ReservaManager::pesquisarReserva(int reservaId) {
//
//}
//Reserva ReservaManager::pesquisarReserva(std::string nomeClient) {
//
//}

void ReservaManager::setDaoManager(DAOManager* daoManager) {
	_daoManager = daoManager;
}

void ReservaManager::setReservaDao() {
	if (_daoManager != NULL) {
		_reservaDao = _daoManager->getReservaDao();
		std::cout << "got dawn";
		return;
	}
	std::cout << "got dawn faill";
}