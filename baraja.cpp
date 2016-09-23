#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h> 
#include <time.h>
#include "baraja.h"
#include "carta.h"
using namespace std;

void baraja::llenarVector(){
	for (int i = 0; i < 4; ++i){
		for (int j = 1; j <= 13; ++j){
			if(i==0){
				carta* c = new carta(j,"♠","negro");
				bar.push_back(c);
			}
			else if(i==1){
				carta* c1 = new carta(j,"♥","negro");
				bar.push_back(c1);
			}
			else if(i==2){
				carta* c3 = new carta(j,"♦","Rojo");
				bar.push_back(c3);
			}
			else if(i==3){
				carta* c4 = new carta(j,"♣","Rojo");
				bar.push_back(c4);
			}
		}
	}
}

carta* baraja::darCarta(){
	srand (time(NULL));
	int iSecret = rand() % 52;
	carta* temp = bar.at(iSecret);
	return temp;
}
