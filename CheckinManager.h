#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Checkin.h"
#include "CheckinDAO.h"
#include "DAOManager.h"
class CheckinManager
{
	public:
		int inserirNumeroPresentes(int idReserva, int quantidade);
};

