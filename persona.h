#pragma once
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
class persona{
	private:
		string nombre;
		int edad;
		string identidad;
	public:
		persona(string,int,string);
		persona();
		~persona();
		string getNombre();
		string getIdentidad();
		virtual string toString()const;
};