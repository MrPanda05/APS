#include "ReservaManager.h"

//for (auto& element : _reservaDao->getReservas()) {
//	std::cout << element->getId() << std::endl;
//}
//Reserva ReservaManager::pesquisarReserva(int reservaId, std::string nomeClient) {
//
//}
//Reserva ReservaManager::pesquisarReserva(int reservaId) {
//
//}
//Reserva ReservaManager::pesquisarReserva(std::string nomeClient) {
//
//}

Reserva* ReservaManager::pesquisarReserva(int idReserva)
{
	//mudar pra usar o dvo pra checar se id eh real
	return DAOManager::getReservaDao()->recuperarReserva(idReserva);
}

Reserva* ReservaManager::pesquisarReserva(std::string nomeCliente)
{
	//todo, change to return vector of Reservas
	return nullptr;
}

bool ReservaManager::cancelarReserva(int idReserva, std::string motivo)
{
	//meio retardado isso
	ReservaDAO* reservaDao = DAOManager::getReservaDao();
	Reserva* reserva = reservaDao->recuperarReserva(idReserva);//2.retrive
	reserva->setStatus(false);
	reservaDao->atualizarReserva(reserva);

	//change  vagas disponiveis
	//change item pagamentos
	return true;
}
