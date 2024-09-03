#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "DAOManager.h"

class CaixaManager
{
	private:
		DAOManager* _daoManager;
	public:
		void setDaoManager(DAOManager* daoManager) { _daoManager = daoManager; }
		void fecharCaixa();
};

