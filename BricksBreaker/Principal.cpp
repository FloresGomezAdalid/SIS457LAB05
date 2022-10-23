#include <iostream>
#include <stdlib.h>
#include "Paddle.h"
#include "Ball.h"
#include "Escenario.h"
#include "Ladrillo.h"
#include "Potenciador.h"
#include "Pila.h"

using namespace std;
int main() {
	Escenario*es = new Escenario;
	Ball* bl = new Ball;
	Ladrillo* ld = new Ladrillo;
	Potenciador* pt = new Potenciador;
	Pila<Escenario>Escenar(3);
	Escenario es1;
	Escenario es2;
	Escenario es3;
	Escenar.Insertar(es1);
	Escenar.Insertar(es2);
	Escenar.Insertar(es3);
	cout << " " << endl;
	Pila<Ball>BL(5);
	Ball b1;
	Ball b2;
	Ball b3;
	BL.Insertar(b1);
	BL.Insertar(b2);
	BL.Insertar(b3);
	cout << " " << endl;
	Pila<Ladrillo>LD(10);
	Ladrillo ld1;
	Ladrillo ld2;
	Ladrillo ld3;
	Ladrillo ld4;
	Ladrillo ld5;
	LD.Insertar(ld1);
	LD.Insertar(ld2);
	LD.Insertar(ld3);
	LD.Insertar(ld4);
	LD.Insertar(ld5);
	cout << " " << endl;
	Pila<Potenciador>PT(15);
	Potenciador pt1;
	Potenciador pt2;
	Potenciador pt3;
	Potenciador pt4;
	Potenciador pt5;
	PT.Insertar(pt1);
	PT.Insertar(pt2);
	PT.Insertar(pt3);
	PT.Insertar(pt4);
	PT.Insertar(pt5);
	cout << " " << endl;
}