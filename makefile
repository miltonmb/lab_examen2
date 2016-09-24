main:	main.o persona.o administrador.o repartidor.o jugador.o carta.o baraja.o mesa.o
		g++ main.o persona.o administrador.o repartidor.o jugador.o carta.o baraja.o mesa.o -o main

main.o:	persona.h administrador.h repartidor.h jugador.h carta.h baraja.h mesa.h
		g++ -c main.cpp

persona.o:	persona.h persona.cpp
		g++ -c persona.cpp

administrador.o:	administrador.h persona.h administrador.cpp
		g++ -c administrador.cpp

repartidor.o:	repartidor.h persona.h repartidor.cpp
		g++ -c repartidor.cpp

jugador.o:	jugador.h persona.h jugador.cpp
		g++ -c jugador.cpp

carta.o:	carta.h carta.cpp
		g++ -c carta.cpp

baraja.o:	baraja.h baraja.cpp
		g++ -c baraja.cpp

mesa.o:	mesa.h mesa.cpp
		g++ -c mesa.cpp

clean:
		rm*.o main


