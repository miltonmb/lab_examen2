#include "persona.h"
#include "administrador.h"
#include "jugador.h"
#include "repartidor.h"
#include "mesa.h"
#include "baraja.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;
int main(){
	string nombre;
	int edad;
	string identidad;
	vector<persona*> personas;
	vector<mesa*> mesas;
	int opcion;
	baraja x;
	char r= 's';
	while(r=='s'||r=='S'){
		cout<<"Que desea hacer: \n";
		cout<<"1.Agregar jugador\n";
		cout<<"2.Logear\n";
		cout<<"3.Agregar Repartidor\n";
		cout<<"4.Agregar administrador\n";
		cout<< "5.Salir: ";
		cin >> opcion;
		switch(opcion){
			case 1:{
				string procedencia;
				string apodo;
				double dinero;
				cout << "Ingrese nombre: ";
				cin >> nombre;
				cout << "Ingresa edad: ";
				cin >> edad;
				cout << "Ingrese la identidad: ";
				cin >> identidad;
				if(identidad.size()>4 && identidad.size()<3){
					cout << "Ingrese la procedencia: ";
					cin >> procedencia;
					cout << "Ingrese el apodo: ";
					cin >> apodo;
					cout << "Ingrese el monto de dinero: ";
					cin >> dinero;
					jugador* j= new jugador(nombre,edad,identidad,procedencia,apodo,dinero);
					personas.push_back(j);
				}
				break;
			}

			case 2:{
				jugador* temp= new jugador();
				cout << "Ingrese su nombre: ";
				cin >> nombre;
				cout << "Ingrese su identidad: ";
				cin >> identidad;
				for (int i = 0; i < personas.size(); ++i){
					if(dynamic_cast<jugador*>(personas.at(i))!= NULL){
						if (personas.at(i)->getNombre()==nombre && personas.at(i)->getIdentidad()==identidad){
							temp = dynamic_cast<jugador*>(personas.at(i));
						}
					}else if(dynamic_cast<administrador*>(personas.at(i)) != NULL){
						if(personas.at(i)->getNombre()==nombre && personas.at(i)->getIdentidad()==identidad){
							cout << "---BIENVENIDO ADMINISTRADOR---\n";
							int op;
							char resp = 's';
							while(resp=='S'||resp=='s'){
								cout << "Que desea realizar: \n";
								cout << "1.Crear Mesa\n";
								cout << "2.Modificar Mesa\n";
								cout << "3.Eliminar mesa: ";
								cin >> op;
								switch(op){
									case 1:{
										int num;
										int opT;
										string tipo;
										cout << "Ingrese el numero de la mesa: ";
										cin >>num;
										cout << "Ingrese el tipo de la mesa: ";
										cin >> opT;
										if(opT==1){
											tipo = "VIP";
										}
										else if(opT==2){
											tipo = "Clasica";
										}
										else if(opT==3){
											tipo = "Viajero";
										}
										mesa* m= new mesa(num,tipo);
										for (int i = 0; i < personas.size(); ++i){
											if(dynamic_cast<repartidor*>(personas.at(i)) != NULL){
												cout << "Repartidor"<<" --- "<<i<<endl;
											}
										}
										int opR;
										cout << "Que repartidor desea agregar a la mesa: ";
										cin >> opR;
										repartidor* temp = dynamic_cast<repartidor*>(personas.at(opR));
										m ->setRepartidor(temp);
										int opJ;
										for (int i = 0; i < personas.size(); ++i){
											if(dynamic_cast<jugador*>(personas.at(i)) != NULL){
												cout << "Jugador"<<" --- "<<i<<endl;
											}
										}
										cout << "Que jugador desea agregar a la mesa: ";
										cin >> opJ;
										jugador* temp2 = dynamic_cast<jugador*>(personas.at(opJ));
										m ->setJugador(temp2);
										mesas.push_back(m);
										break;
									}

									case 2:{
										int opM;
										int n_num;
										int opN;
										string tipo_n;
										for (int i = 0; i < mesas.size(); ++i){
											cout << "Mesa"<<"----"<<i;
											cout << endl;
										}
										cout << "Que mesa desea modificar: ";
										cin >> opM;
										mesa* temp = new mesa();
										temp = mesas.at(opM);
										cout << "Ingrese el nuevo numero de mesa: ";
										cin >> n_num;
										temp -> setNum(n_num);
										cout << "Ingrese el tipo de la mesa: ";
										cin >> opN;
										if(opN==1){
											tipo_n = "VIP";
										}
										else if(opN==2){
											tipo_n = "Clasica";
										}
										else if(opN==3){
											tipo_n = "Viajero";
										}
										temp-> setTipo(tipo_n);
										for (int i = 0; i < personas.size(); ++i){
											if(dynamic_cast<repartidor*>(personas.at(i)) != NULL){
												cout << "Repartidor"<<" --- "<<i<<endl;
											}
										}
										int opR;
										cout << "Que repartidor desea agregar a la mesa: ";
										cin >> opR;
										repartidor* temp1 = dynamic_cast<repartidor*>(personas.at(opR));
										temp ->setRepartidor(temp1);
										int opJ;
										for (int i = 0; i < personas.size(); ++i){
											if(dynamic_cast<jugador*>(personas.at(i)) != NULL){
												cout << "Jugador"<<" --- "<<i<<endl;
											}
										}
										cout << "Que jugador desea agregar a la mesa: ";
										cin >> opJ;
										jugador* temp2 = dynamic_cast<jugador*>(personas.at(opJ));
										temp->setJugador(temp2);

										break;
									}
									case 3:{
										for (int i = 0; i < mesas.size(); ++i){
												cout << "Mesas"<<" ---- " << i<<endl;
										}
										int opE;
										cout << "Que mesa desea eliminar: ";
										cin >> opE;
										mesas.erase(mesas.begin()+opE);
										break;
									}
								}
							}
						}
					}	
				}
				break;
			}
			case 3:{
				string dificultad;
				double dinero;
				cout << "Ingrese nombre: ";
				cin >> nombre;
				cout << "Ingresa edad: ";
				cin >> edad;
				cout << "Ingrese la identidad: ";
				cin >> identidad;
				if(identidad.size()>4 && identidad.size()<3){
					int opD;
					cout << "Que dificultad tiene: \n";
					cout << "1.Dificil\n";
					cout << "2.Intermedio\n";
					cout << "3.Facil\n";
					cin >> opD;
					if (opD == 1){
						dificultad ="Dificil";
					}
					else if(opD==2){
						dificultad ="Intermedio";
					}
					else if(opD==3){
						dificultad ="Facil";
					}
					cout << "Ingrese el dinero: ";
					cin >> dinero;
					repartidor* rep = new repartidor(nombre,edad,identidad,dificultad,dinero);
					personas.push_back(rep);
				}
				break;
			}

			case 4:{
				int anios;
				string rango;
				double sueldo;
				int opRn;
				cout << "Ingrese nombre: ";
				cin >> nombre;
				cout << "Ingresa edad: ";
				cin >> edad;
				cout << "Ingrese la identidad: ";
				cin >> identidad;
				if(identidad.size()>4 && identidad.size()<3){
					cout << "Ingrese los años de experiencia: ";
					cin >> anios;
					cout << "Que rango tiene: \n";
					cout << "1.Gerente Tiempo completo\n";
					cout << "2.Gerente medio-tiempo\n";
					cout << "3.Gerente general\n";
					cin >> opRn;
					if(opRn==1){
						rango = "Gerente tiempo completo";
					}
					else if(opRn==2){
						rango = "Gerente medio-tiempo";
					}
					else if(opRn==3){
						rango = "Gerente general";
					}
					cout << "Que sueldo tiene: ";
					cin >> sueldo;
					administrador* adm = new administrador(nombre,edad,identidad,anios,rango,sueldo);
				}
				break;

			}
		}
	}
}
