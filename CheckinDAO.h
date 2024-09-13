#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Checkin.h"

class CheckinDAO
{
	private:
		std::vector<Checkin*> _myCheckins;
	public:
		~CheckinDAO();
		Checkin* criar();
		Checkin* recuperar(int idReserva);
		bool atualizar(Checkin* checkin);
		bool remover(Checkin* checkin);
};

