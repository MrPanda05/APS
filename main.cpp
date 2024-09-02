#include <iostream>
#include <vector>
#include <string>
#include "test.h"
#include "Cliente.h"
#include "Reserva.h"
#include "ReservaDAO.h"
#include "DAOManager.h"
#include "ReservaManager.h"

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
	DAOManager daoManager;
	ReservaManager reservaManager;
	ReservaDAO reservaDao;
	daoManager.setReservaDao(&reservaDao);
	reservaManager.setDaoManager(&daoManager);


	//Caso de uso cancelar reserva da forma mais crua possivel
	reservaDao.CriarReservaNoReturn();//1 ha uma instancia de reserva
	Reserva* reserva = reservaManager.pesquisarReserva(41);// ache a reserva
	reservaManager.cancelarReserva(reserva, "cliente baitola");//cancele a reserva


	return 0;

}