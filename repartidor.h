#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include "baraja.h"
#include "persona.h"
using namespace std;

class repartidor:public persona{
		private:
			string dificultad;
			double dinero;
			baraja* bara;
		public:
			repartidor(string,int,string,string,double);
			~repartidor();



};