#pragma once
#include <iostream>
#include <vector>
#include <string>

class Reserva
{
	private:
		bool _status;// false means cancel;
		int _id;
		int _pagantes;
		int _cortesias;
		float _valorPessoa;
		float _valorTotal;
		float _valorQuitado;
		float _valorNaoQuitado;
		std::string _dataReserva;
		std::string _horarioReserva;
		std::string _dataAtividada;
		std::string _horarioAtividade;
	public:
		//constructors
		Reserva(int id);
		Reserva(int id, int pagantes, int cortesias, bool status, float valorPessoa, float valorTotal, float valorQuitado, float valorNaoQuitado, std::string dataReserva, std::string horarioReserva, std::string _dataAtividada, std::string horarioAtividade);
		//gets
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
		std::string getDataAtivada() { return _dataAtividada; }
		std::string getHorarioAtividade() { return _horarioAtividade; }
		//sets
		void setStatus(bool newStatus) { _status = newStatus; }
		void setId(int id) { _id = id; }
		void setPagantes(int pagantes) { _pagantes = pagantes; }
		void setCortesias(int cortesias) { _cortesias = cortesias; }
		void setValorPessoa(float valorPessoas) { _valorPessoa = valorPessoas; }
		void setValorTotal(float valorTotal) { _valorTotal = valorTotal; }
		void setValorQuitado(float valorQuitado) { _valorQuitado = valorQuitado; }
		void setValorNaoQuitadol(float valorNaoQuitado) { _valorNaoQuitado = valorNaoQuitado; }
		void setDataReserva(std::string dataReserva) { _dataReserva = dataReserva; }
		void setHorarioReserva(std::string horarioReserva) { _horarioReserva = horarioReserva; }
		void setDataAtividade(std::string dataAtividade) { _dataAtividada = dataAtividade; }
		void setHorarioAtividade(std::string horarioAtividade) { _horarioAtividade = horarioAtividade; }

};

