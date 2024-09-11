#include "ItemPagamentoDAO.h"

ItemPagamentoDAO::~ItemPagamentoDAO()
{

}

ItemPagamento* ItemPagamentoDAO::criarItemPagamento()
{
	ItemPagamento* itemPagamento = new ItemPagamento();
	_myitemPagamentos.push_back(itemPagamento);
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

void ItemPagamentoDAO::listar(std::string dia, ItemPagamento* itemPagamento)
{
	for (auto& element : _myitemPagamentos) {
		if (element->getData() != dia) continue;
		std::cout << element->getPagamentoAtual();
	}
}

void ItemPagamentoDAO::listar(std::string dia, Pagamentos pagamentos)
{
	for (auto& element : _myitemPagamentos) {
		if (element->getPagamentoAtual() == pagamentos) {
			std::cout << element->getValor();
		}
	}
}

std::string ItemPagamentoDAO::now()
{
	std::time_t t = time(NULL);
	struct std::tm date = *localtime(&t);
	std::string dia = std::to_string((date.tm_mday));
	return dia;
}
