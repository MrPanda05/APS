#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Reserva.h"
#include "DAOManager.h"
#include "ReservaDAO.h"
#include "ClienteManager.h"
#include "ClienteDVO.h"
#include "ReservaDVO.h"
#include "DVOManager.h"
#include "ClienteDAO.h"


class ReservaManager
{
	private:
		ClienteManager* _clienteManager;
	public:
		void setClienteManager(ClienteManager* clienteManager) { _clienteManager = clienteManager; }
		std::vector<Reserva *> pesquisarReserva(int idReserva, std::string nomeCliente);
		bool cancelarReserva(int idReserva, std::string motivo);
		std::vector<Reserva*> listarReservasHorario(std::string horarios);
		void listarPorId(int id);

};

