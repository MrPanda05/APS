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
	Caixa* recuperarCaixa(std::string data);
	Caixa* recuperarCaixaAberto();
	bool atualizarCaixa(Caixa* caixa, std::string dataFechamento);
	bool removerCaixa(Caixa* caixa);
	std::vector<Caixa*> getCaixas();
};

