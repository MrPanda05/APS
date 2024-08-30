#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Reserva.h"
#include "Cliente.h"
#include "ReservaDAO.h"
class DAOManager
{
	private:
		ReservaDAO* _reservaDao;
	public:
		void setReservaDao(ReservaDAO* reservaDao);
		ReservaDAO* getReservaDao();
};

