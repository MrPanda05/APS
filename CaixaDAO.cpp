#include "CaixaDAO.h"

CaixaDAO::~CaixaDAO()
{
	for (std::vector<Caixa*>::iterator i = _myCaixas.begin(); i != _myCaixas.end(); ++i) {
		delete* i;
	}
	_myCaixas.clear();
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


Caixa* CaixaDAO::recuperarCaixaAberto()
{
	return _myCaixas.back();
}

bool CaixaDAO::atualizar(Caixa* caixa)
{
	if (caixa == NULL) return false;
	std::time_t t = time(NULL);
	struct std::tm date = *localtime(&t);
	std::string dia = std::to_string((date.tm_mday));
	caixa->setHorarioFechamento(dia);
	return true;
}

bool CaixaDAO::remover(Caixa* caixa)
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
