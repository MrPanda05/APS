#include "CheckinDAO.h"

CheckinDAO::~CheckinDAO()
{
	for (std::vector<Checkin*>::iterator i = _myCheckins.begin(); i != _myCheckins.end(); ++i) {
		delete* i;
	}
	_myCheckins.clear();
}

Checkin* CheckinDAO::criar()
{
    Checkin* newChecking = new Checkin();
    _myCheckins.push_back(newChecking);
	return newChecking;
}

Checkin* CheckinDAO::recuperar(int idReserva)
{
	for (auto& element : _myCheckins) {
		if (element->getReserva()->getId() == idReserva) {
			return element;
		}
	}
	return nullptr;
}

bool CheckinDAO::atualizar(Checkin* checkin)
{
	return true;
}

bool CheckinDAO::remover(Checkin* checkin)
{
    return false;
}
