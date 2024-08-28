#pragma once
#include <iostream>
#include <vector>
#include <string>

class Cliente
{
private:
	int _id;
	std::string _cpf;
	std::string _telefone;//+xxx yy ?1234-1234
	std::string _nome;
	std::string _email;
	std::string _cidade;
	std::string _referencia;
public:
	Cliente(int id, std::string cpf, std::string telefone, std::string nome, std::string email, std::string cidade, std::string referencia);
	int getId() { return _id; }
	std::string getCpf() { return _cpf; }
	std::string getTelefone() { return _telefone; }
	std::string getNome() { return _nome; }
	std::string getEmail() { return _email; }
	std::string getCidade() { return _cidade; }
	std::string getReferencia() { return _referencia; }
};

