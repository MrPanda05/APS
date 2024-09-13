#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Pulseira.h"

class PulseiraDao
{
	private:
		std::vector<Pulseira*> _myPulseiras;
	public:
		~PulseiraDao();
		Pulseira* criar();
		Pulseira* recuperar(int num);
		bool atualizar();
		bool remover();
		std::vector<Pulseira*> listar(Pulseira* pulseira);

};

