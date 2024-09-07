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

Reserva* ReservaManager::pesquisarReserva(int idReserva, std::string nomeCliente)
{
	ClienteDVO* clienteDvo = DVOManager::getClienteDvo();//1
	ReservaDVO* reservaDvo = DVOManager::getReservaDvo();//2
	bool idValido = reservaDvo->validarIdReserva(idReserva);//3
	bool nomeValido = clienteDvo->validarNomeCliente(nomeCliente);//4
	ReservaDAO* reservaDao = DAOManager::getReservaDao();
	if (idValido) return reservaDao->recuperarReserva(idReserva);

}



bool ReservaManager::cancelarReserva(int idReserva, std::string motivo)
{
	//meio retardado isso
	ReservaDAO* reservaDao = DAOManager::getReservaDao();
	Reserva* reserva = reservaDao->recuperarReserva(idReserva);//2.retrive
	reserva->setStatus(false);//3.setstatus
	reservaDao->atualizarReserva(reserva);//4.atualize

	//change  vagas disponiveis
	//change item pagamentos
	return true;
}
