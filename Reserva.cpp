#include "Reserva.h"

Reserva::Reserva(int id) {
	_id = id;
}
void Reserva::setClienteAtual(Cliente* newCliente) {
	_clienteAtual = newCliente;
}

void Reserva::printCliente() {
	if (_clienteAtual == NULL) {
		std::cout << "nulllll pionter" << std::endl;
		return;
	}
	std::cout << _clienteAtual->getCpf();
}

Cliente* Reserva::getClienteAtual() {
	return _clienteAtual;
}

