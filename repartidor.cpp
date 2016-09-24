#include <iostream>
#include <string>
#include <stdio.h>
#include "baraja.h"
#include "repartidor.h"
#include "persona.h"
using namespace std;

repartidor::repartidor(string nombre,int edad,string identidad,string dificultad,double dinero):persona(nombre,edad,identidad),dificultad(dificultad),dinero(dinero){
	bara= new baraja();
}

repartidor::~repartidor(){

}

baraja* repartidor::getBaraja(){
	return bara;
}
