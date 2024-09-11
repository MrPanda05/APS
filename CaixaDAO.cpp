#include "CaixaDAO.h"

CaixaDAO::~CaixaDAO()
{
}

Caixa* CaixaDAO::CriarCaixa()
{
	std::time_t t = time(NULL);
	struct std::tm date = *localtime(&t);
	std::string ano = std::to_string((date.tm_year + 1900));
	std::string mes = std::to_string((date.tm_mon + 1));
	std::string dia = std::to_string((date.tm_mday));
	std::string hora = std::to_string((date.tm_hour));
	std::string min = std::to_string((date.tm_min));
	std::string sec = std::to_string((date.tm_sec));
	std::string horaAbertura = hora + ":" + min + ":" + sec;
	std::string dataCompleta = dia + "/" + mes + "/" + ano;
	Caixa* newCaixa = new Caixa(dataCompleta, horaAbertura);
	_myCaixas.push_back(newCaixa);
	return newCaixa;
}

Caixa* CaixaDAO::recuperarCaixa(std::string data)
{
	for (auto& element : _myCaixas) {
		if (element->getData() == data) {
			return element;
		}
	}
	return nullptr;
}

Caixa* CaixaDAO::recuperarCaixaAberto()
{
	return _myCaixas.back();
}

bool CaixaDAO::atualizarCaixa(Caixa* caixa, std::string dataFechamento)
{
	if (caixa == NULL) return false;
	caixa->setHorarioFechamento(dataFechamento);
	return true;
}

bool CaixaDAO::removerCaixa(Caixa* caixa)
{
	if (caixa == NULL) return false;
	for (auto& element : _myCaixas) {
		if (element->getData() == caixa->getData()) {
			//_myCaixas.erase(std::remove(_myCaixas.begin(), _myCaixas.end(), element->getData()), _myCaixas.end());//fix this
			return true;
		}
	}
	return false;
}

std::vector<Caixa*> CaixaDAO::getCaixas()
{
	return _myCaixas;
}
