#include "DAOManager.h"

DAOManager::DAOManager()
{
	_reservaDao = new ReservaDAO();
	_caixaDao = new CaixaDAO();
	_clienteDao = new ClienteDAO();
	_itemPagamentoDao = new ItemPagamentoDAO();
}

DAOManager::~DAOManager()
{
	delete _reservaDao;
	delete _caixaDao;
	delete _clienteDao;
	delete _itemPagamentoDao;
}

