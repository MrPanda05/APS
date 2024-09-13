#include "PulseiraDao.h"

PulseiraDao::~PulseiraDao()
{
	for (std::vector<Pulseira*>::iterator i = _myPulseiras.begin(); i != _myPulseiras.end(); ++i) {
		delete* i;
	}
	_myPulseiras.clear();
}

Pulseira* PulseiraDao::criar()
{
	Pulseira* newPulseira = new Pulseira();
	_myPulseiras.push_back(newPulseira);
	return newPulseira;
}

Pulseira* PulseiraDao::recuperar(int num)
{
	for (auto& element : _myPulseiras) {
		/*if (element->getNumeracao() == num) {
			return element;
		}*/

	}
	return nullptr;
}

bool PulseiraDao::atualizar()
{
	return false;
}

bool PulseiraDao::remover()
{
	return false;
}

std::vector<Pulseira*> PulseiraDao::listar(Pulseira* pulseira)
{
	return std::vector<Pulseira*>();
}
