#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "Cliente.h"
#include "DAOManager.h"

class ClienteManager
{
	private:
		DAOManager* _daoManager;
	public:
		void setDaoManager(DAOManager* daoManager) { _daoManager = daoManager; }
		void listarPorNome(std::string nome);
};

