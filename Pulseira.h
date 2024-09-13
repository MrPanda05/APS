#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Reserva.h"

class Pulseira
{
	private:
		std::string _numeracao;
		Reserva* _reserva;
	public:
		std::string getNumeracao() { return _numeracao; }
		Reserva* getReserva() { return _reserva; }
		void setNumeracao(std::string numeracao) { _numeracao = numeracao; }
		void setReserva(Reserva* reserva) { _reserva = reserva; }
};

