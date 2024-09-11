#include "Reserva.h"

//prefer this constructor
Reserva::Reserva(int id) {
	_id = id;
	_status = true;
}

Reserva::Reserva(int id, int pagantes, int cortesias, bool status, float valorPessoa, float valorTotal, float valorQuitado, float valorNaoQuitado, std::string dataReserva, std::string horarioReserva, std::string _dataAtividada, std::string horarioAtividade)
{
	_id = id;
	_pagantes = pagantes;
	_cortesias = cortesias;
	_status = status;
	_valorPessoa = valorPessoa;
	_valorTotal = valorTotal;
	_valorQuitado = valorQuitado;
	_valorNaoQuitado = valorNaoQuitado;
	_dataReserva = dataReserva;
	_horarioReserva = horarioReserva;
	_dataAtividada = _dataAtividada;
	_horarioAtividade = horarioAtividade;

}

