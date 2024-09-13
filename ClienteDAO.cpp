#include "ClienteDAO.h"

ClienteDAO::~ClienteDAO()
{
	for (std::vector<Cliente*>::iterator i = _myClientes.begin(); i != _myClientes.end(); ++i) {
		delete* i;
	}
	_myClientes.clear();
}

Cliente* ClienteDAO::criar()
{
	Cliente* newReserva = new Cliente(rand() % 32767);
	_myClientes.push_back(newReserva);
	return newReserva;
}

Cliente* ClienteDAO::recuperar(int id)
{
	for (auto& element : _myClientes) {
		if (element->getId() == id) {
			return element;
		}
	}
	return nullptr;
}

bool ClienteDAO::atualizar(Cliente* cliente)
{
	return false;
}

bool ClienteDAO::remover(Cliente* cliente)
{
	return false;
}

std::vector<Cliente*> ClienteDAO::listar(std::string nome)
{
	std::vector<Cliente*> clientes;
	for (auto& element : _myClientes) {
		if (element->getNome() == nome) {
			clientes.push_back(element);
		}
	}
	return clientes;
}

