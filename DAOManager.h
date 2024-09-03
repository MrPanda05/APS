#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "CaixaDAO.h"
#include "ReservaDAO.h"
class DAOManager
{
	private:
		ReservaDAO* _reservaDao;
		CaixaDAO* _caixaDao;
	public:
		//gets
		ReservaDAO* getReservaDao() { return _reservaDao; }
		CaixaDAO* getCaixaDao() { return _caixaDao; }
		//sets
		void setReservaDao(ReservaDAO* reservaDao) { _reservaDao = reservaDao; }
		void setCaixaDao(CaixaDAO* caixaDao) { _caixaDao = caixaDao; }
		void seilaTest();
};

