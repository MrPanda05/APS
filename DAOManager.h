#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "CaixaDAO.h"
#include "ReservaDAO.h"
#include "ClienteDAO.h"
#include "ItemPagamentoDAO.h"

class DAOManager
{
	private:
		//constructors
		DAOManager();
		ReservaDAO* _reservaDao;
		CaixaDAO* _caixaDao;
		ClienteDAO* _clienteDao;
		ItemPagamentoDAO* _itemPagamentoDao;

		ReservaDAO* IgetReservaDao() { return _reservaDao; }
		CaixaDAO* IgetCaixaDao() { return _caixaDao; }
		ClienteDAO* IgetClienteDao() { return _clienteDao; }
		ItemPagamentoDAO* IgetItemPagamentoDao() { return _itemPagamentoDao; }


	public:
		DAOManager(const DAOManager&) = delete;
		~DAOManager();
		static DAOManager& Get() {
			static DAOManager Instance;
			return Instance;
		}
		static ReservaDAO* getReservaDao() { return Get().IgetReservaDao(); }
		static CaixaDAO* getCaixaDao() { return Get().IgetCaixaDao(); }
		static ClienteDAO* getClienteDao() { return Get().IgetClienteDao(); }
		static ItemPagamentoDAO* getItemPagamentoDao() { return Get().IgetItemPagamentoDao(); }
};

