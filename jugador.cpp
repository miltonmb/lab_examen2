#include <iostream>
#include <string>
#include <stdio.h>
#include "jugador.h"
#include "persona.h"
using namespace std;

jugador::jugador(string nombre,int edad,string identidad,string procedencia,string apodo,double dinero):persona(nombre,edad,identidad),procedencia(procedencia),apodo(apodo),dinero(dinero){

}

jugador::jugador(){
	
}

jugador::~jugador(){

}
double jugador::getDinero(){
	return dinero;
}
void jugador::setDinero(double d){
	dinero = d;
}