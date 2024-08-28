#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Reserva.h"
#include "DAOManager.h"
#include "Cliente.h"
class ReservaDAO
{
	private:
		std::vector<Reserva*> _myReservas;
		DAOManager* _daoManager;

	public:
		ReservaDAO(DAOManager* daoManager);
		void CriarReserva();
		Reserva getReserva(int id);
		Reserva getReservaByClientId(int clienteId);
		void setDAOManager(DAOManager* daoManager);
		~ReservaDAO();

		
};

