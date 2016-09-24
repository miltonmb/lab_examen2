#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include "persona.h"
#include "carta.h"
using namespace std;

class jugador:public persona{
	private:
		string procedencia;
		string apodo;
		double dinero;
	public:
		jugador();
		jugador(string,int,string,string,string,double);
		~jugador();
		double getDinero();
		void setDinero(double);
};