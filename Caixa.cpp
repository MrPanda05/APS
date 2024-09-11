#include "Caixa.h"

Caixa::Caixa()
{
	std::cout << "caixa criado" << std::endl;
}

Caixa::Caixa(std::string data, std::string horarioAbertura)
{
	_data = data;
	_horarioAbertura = horarioAbertura;
}

