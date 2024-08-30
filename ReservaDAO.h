#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Reserva.h"
#include "Cliente.h"
#include<cstdlib>

class ReservaDAO
{
	private:
		std::vector<Reserva*> _myReservas;

	public:
		void CriarReserva();
		Reserva getReserva(int id);
		Reserva getReservaByClientId(int clienteId);
		void printTest();
		~ReservaDAO();

		
};

