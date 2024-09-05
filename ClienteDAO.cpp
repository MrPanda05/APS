#include "ClienteDAO.h"

ClienteDAO::~ClienteDAO()
{
}

Cliente* ClienteDAO::CriarCliente()
{
	return nullptr;
}

void ClienteDAO::CriarClienteNoReturn()
{
}

Cliente* ClienteDAO::recuperarCliente(int id)
{
	return nullptr;
}

bool ClienteDAO::atualizarReserva(Cliente* cliente)
{
	return false;
}

bool ClienteDAO::removerReserva(Cliente* cliente)
{
	return false;
}

std::vector<Cliente*> ClienteDAO::getClientes()
{
	return std::vector<Cliente*>();
}
