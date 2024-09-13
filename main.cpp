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
#include "Checkin.h"
#include "CheckinDAO.h"
#include "CheckinManager.h"
#include "Pulseira.h"
#include "PulseiraDao.h"
#include "PulseiraManager.h"

int main() {
	ReservaManager reservaManager;
	CaixaManager caixaManager;
	ClienteManager clienteManager;
	ItemPagamentoManager itemPagamentoManager;
	CheckinManager checkinManager;
	PulseiraManager pulseiraManager;

	////Caso de uso cancelar reserva
	int idReseva = DAOManager::getReservaDao()->criar()->getId();//Ha instancia de reserva
	Reserva* reserva = reservaManager.pesquisarReserva(idReseva, "mario").at(0);
	bool reservaCanel =  reservaManager.cancelarReserva(reserva->getId(), "cliente morreu");//cancele a reserva

	
	//Caso de uso fechar caixa
	Caixa* caixa = DAOManager::getCaixaDao()->CriarCaixa();
	itemPagamentoManager.listarItensPagamento(Pagamentos::Pix);
	itemPagamentoManager.listarFormasPagamentoDia();
	caixaManager.fecharCaixa();


	//caso de check in
	reservaManager.listarReservasHorario("2/3/2024");
	Checkin* checkin = DAOManager::getCheckinDao()->criar();
	checkin->setReserva(reservaManager.pesquisarReserva(idReseva, "mario").at(0));
	checkinManager.inserirNumeroPresentes(idReseva, 69);
	pulseiraManager.listarNumeracaoPulseiras();

	return 0;

}