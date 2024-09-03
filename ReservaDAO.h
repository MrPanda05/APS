#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include "Reserva.h"

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

