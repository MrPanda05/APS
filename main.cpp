#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include "test.h"
#include "Cliente.h"
#include "Reserva.h"
#include "ReservaDAO.h"
#include "DAOManager.h"
#include "ReservaManager.h"
#include "Caixa.h"
#include "CaixaDAO.h"
#include "CaixaManager.h"
#include "ClienteDAO.h"
#include "ItemPagamento.h"
#include "ItemPagamentoManager.h"
#include "ItemPagamentoDAO.h"
#include "ClienteDVO.h"
#include "ReservaDVO.h"
#include "DVOManager.h"

int main() {
	ReservaManager reservaManager;
	CaixaManager caixaManager;
	ClienteManager clienteManager;
	ItemPagamentoManager itemPagamentoManager;

	////Caso de uso cancelar reserva
	int idReseva = DAOManager::getReservaDao()->CriarReserva()->getId();//Ha instancia de reserva
	bool reservaCanel =  reservaManager.cancelarReserva(reservaManager.pesquisarReserva(idReseva, "Mario")->getId(), "cliente morreu");//cancele a reserva
	bool statusReserva = reservaManager.pesquisarReserva(idReseva)->getStatus();

	
	//Caso de uso fechar caixa
	Caixa* caixa = DAOManager::getCaixaDao()->CriarCaixa();
	itemPagamentoManager.listarItensPagamento(Pagamentos::Pix);
	itemPagamentoManager.listarFormasPagamentoDia();
	caixaManager.fecharCaixa();


	//caso de uso Lan�ar custos do operacional
	/*
	LANCAR CUSTRO DO OPERACIONAL TO IMPLLEMENT
	NAO DA TEMPO DE FAZER AGR, MANDAR DPS
	*/
	return 0;

}