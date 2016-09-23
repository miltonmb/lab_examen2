#include <iostream>
#include <string>
#include <stdio.h>
#include "jugador.h"
#include "repartidor.h"
#include "mesa.h"
#include <sstream>
using namespace std;

mesa::mesa(int n,string t){
	num = n;
	tipo = t;
}

mesa::mesa(){

}
mesa::~mesa(){

}

void mesa::setRepartidor(repartidor* r){
	repart = r;
}

void mesa::setJugador(jugador* jug){
	jugad = jug;
}

void mesa::setNum(int n){
	num = n;
}

void mesa::setTipo(string t){
	tipo = t;
}

string mesa::toString()const{
	stringstream ss;
	ss << "MESA NUM: "<<num;
	return ss.str();
}

