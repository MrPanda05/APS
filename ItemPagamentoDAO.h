#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include "ItemPagamento.h"
#include "Pagamentos.h"

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
		void listar(std::string dia, ItemPagamento* itemPagamento);
		void listar(std::string dia, Pagamentos pagamentos);
		std::string now();

};

