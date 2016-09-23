#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include "carta.h"
#include <vector>
using namespace std;

class baraja{
	private:
		vector<carta*> bar;
	public:
		baraja();
		~baraja();
		void llenarVector();
		carta* darCarta();
};


