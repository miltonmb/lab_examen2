#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include "persona.h"
using namespace std;

class jugador:public persona{
	private:
		string procedencia;
		string apodo;
		double dinero;
	public:
		public:
		jugador(string,int,string,string,string,double);
		~jugador();
};