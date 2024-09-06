#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Reserva.h"
#include "DAOManager.h"
#include "ReservaDAO.h"
#include "ClienteManager.h"

class ReservaManager
{
	private:
		ClienteManager* _clienteManager;
	public:
		void setClienteManager(ClienteManager* clienteManager) { _clienteManager = clienteManager; }
		Reserva* pesquisarReserva(int idReserva);
		Reserva* pesquisarReserva(std::string nomeCliente);
		bool cancelarReserva(int idReserva, std::string motivo);
		void listarReservasHorario(int horarios);
		void listarPorId(int id);

};

