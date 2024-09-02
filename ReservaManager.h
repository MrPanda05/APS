#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Reserva.h"
#include "DAOManager.h"

class ReservaManager
{
	private:
		DAOManager* _daoManager;
	public:
		void setDaoManager(DAOManager* daoManager) { _daoManager = daoManager; }
		Reserva* pesquisarReserva(int idReserva);
		Reserva* pesquisarReserva(std::string nomeCliente);
		bool cancelarReserva(Reserva* reserva, std::string motivo);
		void listarReservasHorario(int horarios);
		void listarPorId(int id);

};

