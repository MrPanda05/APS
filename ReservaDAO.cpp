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
	reserva->setStatus(false);
	return true;
}

bool ReservaDAO::removerReserva(Reserva* reserva) {
	if (reserva == NULL) return false;
	for (auto& element : _myReservas) {
		if (element->getId() == reserva->getId()) {
			//_myReservas.erase(std::remove(_myReservas.begin(), _myReservas.end(), element->getId()), _myReservas.end());
			return true;
		}
	}
	return false;
}

std::vector<Reserva*> ReservaDAO::getReservas() {
	return _myReservas;
}
