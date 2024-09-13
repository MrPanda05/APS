#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include "Reserva.h"
#include "Cliente.h"

class ReservaDAO
{
	private:
		std::vector<Reserva*> _myReservas;
		
	public:
		~ReservaDAO();
		//crud
		Reserva* criar();
		Reserva* recuperar(int id);
		bool atualizar(Reserva* reserva);
		bool remover(Reserva* reserva);
		std::vector<Reserva*> listar(std::string dia, int idReserva);
		std::vector<Reserva*> listar(std::vector<Cliente*> clientes);


		
};

