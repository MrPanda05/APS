#include "ReservaManager.h"
std::vector<Reserva*> ReservaManager::pesquisarReserva(int idReserva, std::string nomeCliente)
{
	ClienteDVO* clienteDvo = DVOManager::getClienteDvo();//1
	ReservaDVO* reservaDvo = DVOManager::getReservaDvo();//2
	bool idValido = reservaDvo->validarIdReserva(idReserva);//3
	bool nomeValido = clienteDvo->validarNomeCliente(nomeCliente);//4
	ReservaDAO* reservaDao = DAOManager::getReservaDao();//5
	if (idValido) {
		return reservaDao->listar("", idReserva);
	}
	if (nomeValido) {
		ClienteDAO* clienteDao = DAOManager::getClienteDao();
		std::vector<Cliente*> clientes = clienteDao->listar(nomeCliente);
		return reservaDao->listar(clientes);

	}
	return std::vector<Reserva*>();
}



bool ReservaManager::cancelarReserva(int idReserva, std::string motivo)
{
	ReservaDAO* reservaDao = DAOManager::getReservaDao();
	Reserva* reserva = reservaDao->recuperar(idReserva);//2.retrive
	reserva->setStatus(false);//3.setstatus
	reservaDao->atualizar(reserva);//4.atualize
	reserva->setMotivo(motivo);
	return true;
}

std::vector<Reserva*> ReservaManager::listarReservasHorario(std::string horarios)
{
	ReservaDAO* reservaDao = DAOManager::getReservaDao();
	Reserva* reserva = reservaDao->recuperar(2);
	return reservaDao->listar(horarios, -1);

}
