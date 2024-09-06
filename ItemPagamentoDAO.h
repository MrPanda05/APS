#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "ItemPagamento.h"

class ItemPagamentoDAO
{
	private:
		std::vector<ItemPagamento*> _myitemPagamentos;
	public:
		~ItemPagamentoDAO();
		ItemPagamento* criarItemPagamento();
		ItemPagamento* recuperarItemPagamento();
		bool atualizarItemPagamento(ItemPagamento* itemPagamento);
		bool removerItemPagamento(ItemPagamento* itemPagamento);



};

