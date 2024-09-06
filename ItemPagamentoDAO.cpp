#include "ItemPagamentoDAO.h"

ItemPagamentoDAO::~ItemPagamentoDAO()
{

}

ItemPagamento* ItemPagamentoDAO::criarItemPagamento()
{
	ItemPagamento* itemPagamento = new ItemPagamento();
	_myitemPagamentos.push_back(itemPagamento);
	std::cout << "Reserva criada" << std::endl;
	return itemPagamento;
}

ItemPagamento* ItemPagamentoDAO::recuperarItemPagamento()
{
	return nullptr;
}

bool ItemPagamentoDAO::atualizarItemPagamento(ItemPagamento* itemPagamento)
{
	return false;
}

bool ItemPagamentoDAO::removerItemPagamento(ItemPagamento* itemPagamento)
{
	return false;
}
