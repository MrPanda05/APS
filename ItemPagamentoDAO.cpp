#include "ItemPagamentoDAO.h"

ItemPagamentoDAO::~ItemPagamentoDAO()
{
	for (std::vector<ItemPagamento*>::iterator i = _myitemPagamentos.begin(); i != _myitemPagamentos.end(); ++i) {
		delete* i;
	}
	_myitemPagamentos.clear();
}

ItemPagamento* ItemPagamentoDAO::criar()
{
	ItemPagamento* itemPagamento = new ItemPagamento();
	_myitemPagamentos.push_back(itemPagamento);
	return itemPagamento;
}

ItemPagamento* ItemPagamentoDAO::recuperar()
{
	return nullptr;
}

bool ItemPagamentoDAO::atualizar(ItemPagamento* itemPagamento)
{
	return false;
}

bool ItemPagamentoDAO::remover(ItemPagamento* itemPagamento)
{
	return false;
}

std::vector<ItemPagamento*> ItemPagamentoDAO::listar(std::string dia, ItemPagamento* itemPagamento)
{
	std::vector<ItemPagamento*> itemPagamentos;
	for (auto& element : _myitemPagamentos) {
		if (element->getData() != dia) continue;
		itemPagamentos.push_back(element);
	}
	return itemPagamentos;
}

std::string ItemPagamentoDAO::now()
{
	std::time_t t = time(NULL);
	struct std::tm date = *localtime(&t);
	std::string dia = std::to_string((date.tm_mday));
	return dia;
}
