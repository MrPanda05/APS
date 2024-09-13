#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <algorithm>
#include "Caixa.h"

class CaixaDAO
{
private:
	std::vector<Caixa*> _myCaixas;

public:
	~CaixaDAO();
	//crud
	Caixa* CriarCaixa();
	Caixa* recuperarCaixaAberto();
	bool atualizar(Caixa* caixa);
	bool remover(Caixa* caixa);
	std::vector<Caixa*> listar();

};

