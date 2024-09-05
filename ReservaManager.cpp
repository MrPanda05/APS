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

	return _daoManager->getReservaDao()->recuperarReserva(idReserva);
}

Reserva* ReservaManager::pesquisarReserva(std::string nomeCliente)
{
	//todo, change to return vector of Reservas
	return nullptr;
}

bool ReservaManager::cancelarReserva(int idReserva, std::string motivo)
{
	//meio retardado isso
	Reserva* temp = pesquisarReserva(idReserva);
	temp->setStatus(false);
	_daoManager->getReservaDao()->atualizarReserva(temp);
	//change  vagas disponiveis
	//change item pagamentos
	return true;
}
