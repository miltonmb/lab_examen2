#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

repartidor::repartidor(string nombre,int edad,string identidad,string dificultad,double dinero,baraja baraja):persona(nombre,edad,identidad),dificultad(dificultad),dinero(dinero),baraja(baraja){

}

repartidor::~repartidor(){
	
}
