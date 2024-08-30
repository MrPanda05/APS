#include <iostream>
#include <vector>
#include <string>
#include "test.h"
#include "Cliente.h"
#include "Reserva.h"
#include "ReservaDAO.h"
#include "DAOManager.h"
#include "ReservaManager.h"

std::string getInput() {
	std::string input;
	std::cout << "Digite: \n";
	std::cin >> input;
	return input;
}
void doStuff(std::string input, ReservaDAO* dao) {
	if (input == "getReserva") {
		std::string idInput;
		idInput = getInput();
		Reserva reserva = dao->getReserva(std::stoi(idInput));
	}
}
void readInput(ReservaDAO* dao) {
	std::string failSafe = "stop";
	std::string input;
	while (input != failSafe) {
		input = getInput();
		doStuff(input, dao);
	}
}

int main() {
	//Cliente* myCliente = new Cliente(34, "111222333444", "550044333", "Mario", "mario@gmail.com", "mandaguari", "ref");
	//Cliente* myCliente = new Cliente();
	//std::cout << myCliente->getCidade();
	//Cliente myCliente(34, "111222333444", "550044333", "Mario", "mario@gmail.com", "mandaguari", "ref");
	//std::cout << myCliente.getCidade() << std::endl;
	//Reserva reserva;
	//reserva.setClienteAtual(&myCliente);
	//reserva.printCliente();
	//DAOManager myDaoManager;
	ReservaDAO reservaDao;
	DAOManager daoManager;
	ReservaManager reservaManager;
	reservaManager.setDaoManager(&daoManager);
	daoManager.setReservaDao(&reservaDao);
	reservaManager.setReservaDao();
	return 0;
}