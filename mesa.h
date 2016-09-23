#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include "jugador.h"
#include "repartidor.h"
using namespace std;

class mesa{
	private:
		int num;
		string tipo;
		repartidor* repart;
		jugador* jugad;
	public:
		mesa(int,string);
		~mesa();
		void setRepartidor(repartidor*);
		void setJugador(jugador*);
		string toString()const;

};
