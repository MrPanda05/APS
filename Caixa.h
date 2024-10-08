#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <chrono>

class Caixa
{
	private:
		std::string _data;
		std::string _horarioAbertura;
		std::string _horarioFechamento;

	public:
		Caixa();
		Caixa(std::string data, std::string horarioAbertura);
		//gets
		std::string getData() { return _data; }
		std::string getHorarioAbertura() { return _horarioAbertura; }
		std::string getHorarioFechamento() { return _horarioFechamento; }
		//sets
		void setData(std::string data) { _data = data; }
		void setHorarioAbertura(std::string horarioAbertura) { _horarioAbertura = horarioAbertura; }
		void setHorarioFechamento(std::string horarioFechamento) { _horarioFechamento = horarioFechamento; }


};

