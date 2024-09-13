#include "PulseiraManager.h"

std::vector<Pulseira*> PulseiraManager::listarNumeracaoPulseiras()
{
	PulseiraDao* pulseiraDao = DAOManager::getPulseiraDao();
	Pulseira* pulseira = pulseiraDao->recuperar(3);
	return pulseiraDao->listar(pulseira);
}
