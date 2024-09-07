#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "ReservaDVO.h"
#include "ClienteDVO.h"


class DVOManager
{
private:
	//constructors
	DVOManager();
	ReservaDVO* _reservaDvo;
	ClienteDVO* _clienteDvo;

	ReservaDVO* IgetReservaDvo() { return _reservaDvo; }
	ClienteDVO* IgetClienteDvo() { return _clienteDvo; }


public:
	DVOManager(const DVOManager&) = delete;
	~DVOManager();
	static DVOManager& Get() {
		static DVOManager Instance;
		return Instance;
	}
	static ReservaDVO* getReservaDvo() { return Get().IgetReservaDvo(); }
	static ClienteDVO* getClienteDvo() { return Get().IgetClienteDvo(); }
};

