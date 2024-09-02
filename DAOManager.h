#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "ReservaDAO.h"
class DAOManager
{
	private:
		ReservaDAO* _reservaDao;
	public:
		//gets
		ReservaDAO* getReservaDao() { return _reservaDao; }
		//sets
		void setReservaDao(ReservaDAO* reservaDao) { _reservaDao = reservaDao; }

		void seilaTest();
};

