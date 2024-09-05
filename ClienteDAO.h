#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include "Cliente.h"

class ClienteDAO
{
private:
	std::vector<Cliente*> _myClientes;

public:
	~ClienteDAO();
	//crud
	Cliente* CriarCliente();
	void CriarClienteNoReturn();
	Cliente* recuperarCliente(int id);
	bool atualizarReserva(Cliente* cliente);
	bool removerReserva(Cliente* cliente);
	std::vector<Cliente*> getClientes();
};

