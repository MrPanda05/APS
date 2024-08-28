#include "ReservaDAO.h"

ReservaDAO::~ReservaDAO() {
	for (std::vector<Reserva*>::iterator i = _myReservas.begin(); i != _myReservas.end(); ++i) {
		delete* i;
	}
	_myReservas.clear();
}
void ReservaDAO::CriarReserva() {
	Reserva* newReserva = new Reserva(1);
	_myReservas.push_back(newReserva);
	std::cout << "Reserva criada" << std::endl;
}

Reserva ReservaDAO::getReserva(int id) {
	std::cout << "Procuurando" << std::endl;

	for(Reserva* reserva : _myReservas)
	{
		if (reserva->getId() == id) {
			std::cout << "Reserva achada" << std::endl;
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
