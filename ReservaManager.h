#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Reserva.h"
#include "Cliente.h"
#include "DAOManager.h"

class ReservaManager
{
	private:
		DAOManager* _daoManager;
		ReservaDAO* _reservaDao;
	public:
		Reserva pesquisarReserva(int reservaId, std::string nomeCliente);
		Reserva pesquisarReserva(int reservaId);
		Reserva pesquisarReserva(std::string nomeCliente);
		std::string listarPorId(int id);
		std::string listarPorNome(std::string nome);
		bool cancelarReserva(Reserva reserva, std::string motivo);
		void setDaoManager(DAOManager* daoManager);
		void setReservaDao();


};

