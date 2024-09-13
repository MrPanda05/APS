#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Reserva.h"

class Checkin
{
	private:
		int _numeroPresentes;
		Reserva* _reserva;
	public:
		int getNumPresentes() { return _numeroPresentes; }
		Reserva* getReserva() { return _reserva; }
		void setNumeroPresentes(int numeroPresentes) { _numeroPresentes = numeroPresentes; }
		void setReserva(Reserva* reserva) { _reserva = reserva; }
};

