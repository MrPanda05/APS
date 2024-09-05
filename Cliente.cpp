#include "Cliente.h"
#include <iostream>
#include <vector>
#include <string>

Cliente::Cliente(int id)
{
	_id = id;
	std::cout << "cliente Instanciado vazio com id: " << id << std::endl;
}

Cliente::Cliente(int id, std::string cpf, std::string telefone, std::string nome, std::string email, std::string cidade, std::string referencia, Reserva* reserva) {
	_id = id;
	_cpf = cpf;
	_telefone = telefone;
	_nome = nome;
	_email = email;
	_cidade = cidade;
	_referencia = referencia;
	_reserva = reserva;
	std::cout << "Cliente Instanciado especificado com id: " << id << std::endl;
}
