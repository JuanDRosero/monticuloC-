#include <iostream>
#include "Monticulo.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	monticulo m(5);
	cout<<"Sin nada"<<endl;
	m.imprimir();
	cout<<"Monticulo lleno "<<m.monticuloLleno()<<endl;
	cout<<endl;
	m.insertar(60);
	m.imprimir();
	cout<<"Monticulo lleno "<<m.monticuloLleno()<<endl;
	cout<<endl;
	m.insertar(80);
	m.imprimir();
	cout<<"Monticulo lleno "<<m.monticuloLleno()<<endl;
	cout<<endl;
	m.insertar(20);
	m.imprimir();
	cout<<"Monticulo lleno "<<m.monticuloLleno()<<endl;
	cout<<endl;
	m.insertar(90);
	m.imprimir();
	cout<<"Monticulo lleno "<<m.monticuloLleno()<<endl;
	m.insertar(100);
	m.imprimir();
	cout<<"Monticulo lleno "<<m.monticuloLleno()<<endl;
	cout<<endl;
	
//	monticulo m1;
//	m1.imprimir();
	return 0;
}
