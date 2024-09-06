#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "ItemPagamento.h"
#include "Pagamentos.h"

class ItemPagamentoManager
{
	private:
		ItemPagamento* itemPagamento;

	public:
		bool listarItensPagamento(Pagamentos pagamento);
		void listarFormasPagamentoDia();
};

