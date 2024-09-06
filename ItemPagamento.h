#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Pagamentos.h"
#include "Reserva.h"

class ItemPagamento
{
	private:
		enum Pagamentos _pagamento = Pagamentos::Dinheiro;
		std::string _data;
		std::string _horario;
		std::string _formaDesejada;
		float _valor;
		bool _status;
		Reserva* _reserva;
	public:
		ItemPagamento();
		//gets
		Pagamentos getPagamentoAtual() { return _pagamento; };
		std::string getData() { return _data; }
		std::string getHorario() { return _horario; }
		std::string getFormaDesejada() { return _formaDesejada; }
		float getValor() { return _valor; }
		bool getStatus() { return _status; }
		Reserva* reserva() { return _reserva; }
		//sets
		void setPagamentoAtual(Pagamentos pagamento) { _pagamento = pagamento; }
		void setData(std::string data) { _data = data; }
		void setHorario(std::string horario) { _horario = horario; }
		void setFormaDesejada(std::string formaDesejada) { _formaDesejada = formaDesejada; }
		void setValor(float valor) { _valor = valor; }
		void setStatus(bool status) { _status = status; }
		void setReserva(Reserva* reserva) { _reserva = reserva; }

};

