#include "ReservaDAO.h"


ReservaDAO::~ReservaDAO() {
	for (std::vector<Reserva*>::iterator i = _myReservas.begin(); i != _myReservas.end(); ++i) {
		delete* i;
	}
	_myReservas.clear();
}
Reserva* ReservaDAO::CriarReserva() {
	Reserva* newReserva = new Reserva(rand());
	_myReservas.push_back(newReserva);
	std::cout << "Reserva criada" << std::endl;
	return newReserva;
}

void ReservaDAO::CriarReservaNoReturn()
{
	Reserva* newReserva = new Reserva(rand());
	_myReservas.push_back(newReserva);
	std::cout << "Reserva criada" << std::endl;
}

Reserva* ReservaDAO::recuperarReserva(int id) {
	for (auto & element : _myReservas) {
		if (element->getId() == id) {
			return element;
		}
	}
	return nullptr;
}

bool ReservaDAO::atualizarReserva(Reserva* reserva) {
	if (reserva == NULL) return false;
	reserva->setStatus(!reserva->getStatus());
	return true;
}

bool ReservaDAO::removerReserva(Reserva* reserva) {
	if (reserva == NULL) return false;
	for (auto& element : _myReservas) {
		if (element->getId() == reserva->getId()) {
			//todo: add remove element _myReserva.remove(element) or something
			return true;
		}
	}
}

std::vector<Reserva*> ReservaDAO::getReservas() {
	return _myReservas;
}
