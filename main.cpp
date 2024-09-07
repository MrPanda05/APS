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
//std::string getInput() {
//	std::string input;
//	std::cout << "Digite: \n";
//	std::cin >> input;
//	return input;
//}
//void doStuff(std::string input, ReservaDAO* dao) {
//	if (input == "cancelarReserva") {
//		std::string idInput;
//		idInput = getInput();
//		//Reserva reserva = dao->getReserva(std::stoi(idInput));
//	}
//}
//void readInput(ReservaDAO* dao) {
//	std::string failSafe = "stop";
//	std::string input;
//	while (input != failSafe) {
//		input = getInput();
//		doStuff(input, dao);
//	}
//}

//int x = 10;
//int y = 34;
//
//std::vector<int*> test{ &x, &y };
//
//std::vector<int*> testVector() {
//	return test;
//}

int main() {
	ReservaManager reservaManager;
	CaixaManager caixaManager;
	ClienteManager clienteManager;
	ItemPagamentoManager itemPagamentoManager;

	////Caso de uso cancelar reserva da forma mais crua possivel
	//Pre conditions
	int idReseva = DAOManager::getReservaDao()->CriarReserva()->getId();//Ha instancia de reserva
	// Caso de uso em si
	bool reservaCanel =  reservaManager.cancelarReserva(reservaManager.pesquisarReserva(idReseva, "Mario")->getId(), "cliente morreu");//cancele a reserva
	//pos conditions
	bool statusReserva = reservaManager.pesquisarReserva(idReseva)->getStatus();
	//ReservaCancelada

	
	//Caso de uso fechar caixa de forma mais crua
	// pre conditions
	Caixa* caixa = DAOManager::getCaixaDao()->CriarCaixa();//ha instancia de caixa
	//Caso de uso em si
	itemPagamentoManager.listarItensPagamento(Pagamentos::Pix);
	itemPagamentoManager.listarFormasPagamentoDia();
	caixaManager.fecharCaixa();
	//Pos conditions
	//caixa fechado

	//caso de uso Lan�ar custos do operacional de forma crua

	/*
	LANCAR CUSTRO DO OPERACIONAL TO IMPLLEMENT
	NAO DA TEMPO DE FAZER AGR, MANDAR DPS
	*/

	
	return 0;

}