#include <iostream>
#include <string.h>
#include "administrador.h"
#include "persona.h"
using namespace std;
administrador::administrador(string nombre,int edad,string identidad,int anios,string rango,double saldo):persona(nombre,edad,identidad),anios(anios),rango(rango),sueldo(sueldo){

}

administrador::~administrador(){

}