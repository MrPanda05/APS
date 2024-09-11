#include "ItemPagamentoManager.h"

bool ItemPagamentoManager::listarItensPagamento(Pagamentos pagamento)
{
	ItemPagamentoDAO* dao = DAOManager::getItemPagamentoDao();
	ItemPagamento* itemPagamento = dao->recuperarItemPagamento();
	std::string dia = dao->now();
	return true;
}

void ItemPagamentoManager::listarFormasPagamentoDia()
{
	ItemPagamentoDAO* dao = DAOManager::getItemPagamentoDao();
	ItemPagamento* itemPagamento = dao->recuperarItemPagamento();
	std::string dia = dao->now();
	dao->listar(dia, itemPagamento);
}
