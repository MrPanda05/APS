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

bool ReservaManager::cancelarReserva(Reserva* reserva, std::string motivo)
{
	if (reserva == NULL) return false;//fail pre condition

	reserva->setStatus(false);
	std::cout << "Reserva de id: " << reserva->getId() << " devido a : " << motivo << std::endl;
	//change  vagas disponiveis
	//change item pagamentos
	return true;
}
