#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Reserva.h"
#include<cstdlib>

class ReservaDAO
{
	private:
		std::vector<Reserva*> _myReservas;
		
	public:
		~ReservaDAO();
		//crud
		Reserva* CriarReserva();
		void CriarReservaNoReturn();
		Reserva* recuperarReserva(int id);
		bool atualizarReserva(Reserva* reserva);
		bool removerReserva(Reserva* reserva);
		std::vector<Reserva*> getReservas();


		
};

