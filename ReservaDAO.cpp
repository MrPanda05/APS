#include "ReservaDAO.h"

ReservaDAO::ReservaDAO(DAOManager* daoManager) {
	_daoManager = daoManager;
}
ReservaDAO::~ReservaDAO() {
	for (std::vector<Reserva*>::iterator i = _myReservas.begin(); i != _myReservas.end(); ++i) {
		delete* i;
	}
	_myReservas.clear();
}
void ReservaDAO::CriarReserva() {
	Reserva* newReserva = new Reserva();
	_myReservas.push_back(newReserva);
	std::cout << "Reserva criada" << std::endl;
}

Reserva ReservaDAO::getReserva(int id) {
	for(Reserva* reserva : _myReservas)
	{
		if (reserva->getId() == id) {
			return *reserva;
		}
	}
}

Reserva ReservaDAO::getReservaByClientId(int clienteId) {
	for (Reserva* reserva : _myReservas)
	{
		if (reserva->getClienteAtual()->getId() == clienteId) {
			return *reserva;
		}
	}
}

void ReservaDAO::setDAOManager(DAOManager* daoManager) {
	_daoManager = daoManager;
}