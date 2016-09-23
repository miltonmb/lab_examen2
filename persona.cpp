#include <iostream>
#include <string>
#include "persona.h"
#include <stdio.h>
using namespace std;
persona::persona(string n,int e,string id){
	nombre = n;
	edad = e;
	identidad = id;
}

persona::~persona(){

}