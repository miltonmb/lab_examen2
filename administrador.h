#pragma once
#include <iostream>
#include <string>
#include "persona.h"
#include <stdio.h>
using namespace std;
using std::string;
class administrador:public persona{
	private:
		int anios;
		string rango;
		double sueldo;
	public:
		administrador(string,int,string,int,string,double);
		~administrador();
};