#include "ReservaDAO.h"


ReservaDAO::~ReservaDAO() {
	for (std::vector<Reserva*>::iterator i = _myReservas.begin(); i != _myReservas.end(); ++i) {
		delete* i;
	}
	_myReservas.clear();
}
Reserva* ReservaDAO::criar() {
	Reserva* newReserva = new Reserva(rand() % 32767);
	_myReservas.push_back(newReserva);
	return newReserva;
}


Reserva* ReservaDAO::recuperar(int id) {
	for (auto & element : _myReservas) {
		if (element->getId() == id) {
			return element;
		}
	}
	return nullptr;
}

bool ReservaDAO::atualizar(Reserva* reserva) {
	if (reserva == NULL) return false;
	reserva->setStatus(false);
	return true;
}

bool ReservaDAO::remover(Reserva* reserva) {
	if (reserva == NULL) return false;
	for (auto& element : _myReservas) {
		if (element->getId() == reserva->getId()) {
			//_myReservas.erase(std::remove(_myReservas.begin(), _myReservas.end(), element->getId()), _myReservas.end());
			return true;
				}
	}
	return false;
}

std::vector<Reserva*> ReservaDAO::listar(std::string dia, int idReserva)
{
	std::vector<Reserva*> reservas;
	if (dia == "") {
		reservas.push_back(recuperar(idReserva));
		return reservas;
	}
	return std::vector<Reserva*>();
}

std::vector<Reserva*> ReservaDAO::listar(std::vector<Cliente*> clientes)
{
	return std::vector<Reserva*>();
}

