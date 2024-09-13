#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include "ItemPagamento.h"
#include "Pagamentos.h"

class ItemPagamentoDAO
{
	private:
		std::vector<ItemPagamento*> _myitemPagamentos;
	public:
		~ItemPagamentoDAO();
		ItemPagamento* criar();
		ItemPagamento* recuperar();
		bool atualizar(ItemPagamento* itemPagamento);
		bool remover(ItemPagamento* itemPagamento);
		std::vector<ItemPagamento*> listar(std::string dia, ItemPagamento* itemPagamento);
		std::string now();

};

