#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include "DAOManager.h"
#include "CaixaDAO.h"
class CaixaManager
{
	private:
		DAOManager* _daoManager;
	public:
		void setDaoManager(DAOManager* daoManager) { _daoManager = daoManager; }
		void fecharCaixa();
		std::string now();
};

