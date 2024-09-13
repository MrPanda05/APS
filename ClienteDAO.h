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
	Cliente* criar();
	Cliente* recuperar(int id);
	bool atualizar(Cliente* cliente);
	bool remover(Cliente* cliente);
	std::vector<Cliente*> listar(std::string nome);
};

