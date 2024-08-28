#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Reserva.h"
#include "Cliente.h"
class ReservaDAO
{
	private:
		std::vector<Reserva*> _myReservas;

	public:
		void CriarReserva();
		Reserva getReserva(int id);
		Reserva getReservaByClientId(int clienteId);
		~ReservaDAO();

		
};

