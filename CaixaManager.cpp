#include "CaixaManager.h"

std::string CaixaManager::now()
{
	std::time_t t = time(NULL);
	struct std::tm date = *localtime(&t);
	std::string hora = std::to_string((date.tm_hour));
	std::string min = std::to_string((date.tm_min));
	std::string sec = std::to_string((date.tm_sec));
	std::string horaAbertura = hora + ":" + min + ":" + sec;
	return horaAbertura;
}
void CaixaManager::fecharCaixa()
{
	CaixaDAO* dao = DAOManager::getCaixaDao();
	Caixa* caixa = dao->recuperarCaixaAberto();
	caixa->setHorarioFechamento(now());
}

