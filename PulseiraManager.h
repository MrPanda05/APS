#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "DAOManager.h"
#include "Pulseira.h"

class PulseiraManager
{
	public:
		std::vector<Pulseira*> listarNumeracaoPulseiras();
};

