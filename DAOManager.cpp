#include "DAOManager.h"

DAOManager::DAOManager()
{
	_reservaDao = new ReservaDAO();
	_caixaDao = new CaixaDAO();
	_clienteDao = new ClienteDAO();
	_itemPagamentoDao = new ItemPagamentoDAO();
	_checkinDao = new CheckinDAO();
	_pulseiraDao = new PulseiraDao();
}

DAOManager::~DAOManager()
{
	delete _reservaDao;
	delete _caixaDao;
	delete _clienteDao;
	delete _itemPagamentoDao;
	delete _checkinDao;
	delete _pulseiraDao;
}

