#pragma once
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
	bool atualizarCaixa(Caixa* caixa, std::string dataFechamento);
	bool removerCaixa(Caixa* caixa);
	std::vector<Caixa*> getCaixas();
};

