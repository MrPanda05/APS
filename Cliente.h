#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Reserva.h"

class Cliente
{
private:
	Reserva* _reserva;
	int _id;
	std::string _cpf;
	std::string _telefone;//+xxx yy ?1234-1234
	std::string _nome;
	std::string _email;
	std::string _cidade;
	std::string _referencia;
public:
	//constructors
	Cliente(int id);
	Cliente(int id, std::string cpf, std::string telefone, std::string nome, std::string email, std::string cidade, std::string referencia);
	//gets
	Reserva* getReserva() { return _reserva; }
	int getId() { return _id; }
	std::string getCpf() { return _cpf; }
	std::string getTelefone() { return _telefone; }
	std::string getNome() { return _nome; }
	std::string getEmail() { return _email; }
	std::string getCidade() { return _cidade; }
	std::string getReferencia() { return _referencia; }
	//sets
	void setReserva(Reserva* reserva) { _reserva = reserva; }
	void setId(int id) { _id = id; }
	void setCPF(std::string cpf) { _cpf = cpf; }
	void setTelefone(std::string telefone) { _telefone = telefone; }
	void setNome(std::string nome) { _nome = nome; }
	void setEmail(std::string email) { _email = email; }
	void setCidade(std::string cidade) { _cidade = cidade; }
	void setReferencia(std::string referencia) { _referencia = referencia; }
};

