#include "ClienteDVO.h"

bool ClienteDVO::validarNomeCliente(std::string nome)
{
	if (nome == "") return false;//nome invalido
	return true;//nome valido
}
