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
		mesa();
		mesa(int,string);
		~mesa();
		void setRepartidor(repartidor*);
		void setJugador(jugador*);
		jugador* getJugador();
		repartidor* getRepartidor();
		void setNum(int);
		void setTipo(string);
		string toString()const;

};
