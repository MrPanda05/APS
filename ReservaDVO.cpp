#include "ReservaDVO.h"

bool ReservaDVO::validarIdReserva(int id)
{
	if (id < 0 || id > 32767) return false;//id invalido
	return true;//id valido
}
