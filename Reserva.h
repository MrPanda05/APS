#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Cliente.h"

class Reserva
{
	private:
		bool _status;
		int _id;
		int _pagantes;
		int _cortesias;
		float _valorPessoa;
		float _valorTotal;
		float _valorQuitado;
		float _valorNaoQuitado;
		std::string _dataReserva;
		std::string _horarioReserva;
		std::string _dataAtivada;
		std::string _horarioAtividade;

		Cliente* _clienteAtual;

	public:
		Reserva(int id);
		bool getStatus() { return _status; }
		int getId() { return _id; }
		int getPagantes() { return _pagantes; }
		int getCortesias() { return _cortesias; }
		float getValorPessoas() { return _valorPessoa; }
		float getValorTotal() { return _valorTotal; }
		float getValorQuitado() { return _valorQuitado; }
		float getValorNaoQuitado() { return _valorNaoQuitado; }
		std::string getDataReserva() { return _dataReserva; }
		std::string getHorarioReserva() { return _horarioReserva; }
		std::string getDataAtivada() { return _dataAtivada; }
		std::string getHorarioAtividade() { return _horarioAtividade; }

		void setClienteAtual(Cliente* newCliente);
		Cliente* getClienteAtual();
		void printCliente();





};

