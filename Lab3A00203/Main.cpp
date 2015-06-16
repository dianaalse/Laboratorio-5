// Cambio en Github Listaenlazada.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using std::cout;
using std::endl;
using std::string;





int _tmain(int argc, _TCHAR* argv[])
{
	Lista elemInt;
	Lista elemDou;
	Lista elemPer;
	Lista elemIntInt;
	int intFrente = 5;
	int intFinal = 2;


	cout << "----------La lista de Elementos Int, insertar al final--------------------" << "\n" << endl; 

	for (int i = 0; i < 3; ++i) {
		elemInt.insertarAlFinal(new ElementoInt(i));
		elemInt.imprimir();
	}

	cout << "---La lista de Elementos Int, insertar al frente--- " << "\n" << endl;

	for (int i = 3; i < 5; ++i) {
		elemInt.insertarAlFrente(new ElementoInt(i));
		elemInt.imprimir();
	}

	cout << "---La lista de Elementos Int, eliminar del frente--- " << "\n" << endl;

	elemInt.eliminarDelFrente(new ElementoInt(intFrente));
	elemInt.imprimir();

	cout << "---La lista de Elementos Int, eliminar del final--- " << "\n" << endl;

	elemInt.eliminarDelFinal(new ElementoInt(intFinal));
	elemInt.imprimir();

	cout << "---La lista de Elementos Int, eliminar del medio--- " << "\n" << endl;

	elemInt.eliminarDelMedio(2);
	elemInt.imprimir();

	cout << "---La lista de Elementos Int, insertar al medio--- " << "\n" << endl;
	elemInt.insertarAlMedio(new ElementoInt(5), 1);
	elemInt.imprimir();

	cout << "----------La lista de Elementos IntInt, insertar al final--------------------" << "\n" << endl;

	for (int i = 0; i < 3; ++i) {
		elemIntInt.insertarAlFinal(new ElementoIntInt(i,i+1));
		elemIntInt.imprimir();
	}

	cout << "---La lista de Elementos IntInt, insertar al frente--- " << "\n" << endl;

	for (int i = 3; i < 5; ++i) {
		elemIntInt.insertarAlFrente(new ElementoIntInt(i,i+2));
		elemIntInt.imprimir();
	}

	cout << "---La lista de Elementos IntInt, eliminar del frente--- " << "\n" << endl;

	elemIntInt.eliminarDelFrente(new ElementoIntInt(12,2));
	elemIntInt.imprimir();

	cout << "---La lista de Elementos IntInt, eliminar del final--- " << "\n" << endl;

	elemIntInt.eliminarDelFinal(new ElementoIntInt(3,2));
	elemIntInt.imprimir();

	cout << "---La lista de Elementos IntInt, eliminar del medio--- " << "\n" << endl;

	elemIntInt.eliminarDelMedio(2);
	elemIntInt.imprimir();

	cout << "---La lista de Elementos IntInt, insertar al medio--- " << "\n" << endl;
	elemIntInt.insertarAlMedio(new ElementoIntInt(5,6), 1);
	elemIntInt.imprimir();



	cout << "----------La lista de Elementos Double, insertar al final--------------------" << "\n" << endl;

	for (int i = 1; i < 4; ++i) {
		elemDou.insertarAlFinal(new ElementoDou((i / 1.3)));
		elemDou.imprimir();
	}

	cout << "---La lista de Elementos Double, insertar al frente---" << endl;

	for (int i = 4; i < 6; ++i) {
		elemDou.insertarAlFrente(new ElementoDou(i / 1.3));
		elemDou.imprimir();
	}

	cout << "---La lista de Elementos Double, eliminar del frente--- " << "\n" << endl;

	elemDou.eliminarDelFrente(new ElementoDou(0.769231));
	elemDou.imprimir();

	cout << "---La lista de Elementos Double, eliminar del final--- " << "\n" << endl;

	elemDou.eliminarDelFinal(new ElementoDou(2.30769));
	elemDou.imprimir();

	cout << "---La lista de Elementos Double, eliminar del medio ---" << "\n" << endl;

	elemDou.eliminarDelMedio(2);
	elemDou.imprimir();

	cout << "---La lista de Elementos Double, insertar al medio--- " << "\n" << endl;
	elemDou.insertarAlMedio(new ElementoDou(3.33), 1);
	elemDou.imprimir();


	cout << "----------La lista de Elementos Persona, insertar al final--------------------" << "\n" << endl;

	int id = 0;
	string arrayNom[5] = { "Andres", "Marco", "Luis", "Miguel", "Daniel" };
	Persona** pe;
	pe = new Persona*[5];
	for (int i = 0; i < 3; ++i) {
		pe[i] = new Persona(id++, arrayNom[i]);
		elemPer.insertarAlFrente(new ElementoPersona(pe[i]));
		elemPer.imprimir();
	}

	cout << "---La lista de Elementos Persona, insertar al frente---" << "\n" << endl;

	for (int i = 3; i < 5; ++i) {
		pe[i] = new Persona(id++, arrayNom[i]);
		elemPer.insertarAlFrente(new ElementoPersona(pe[i]));
		elemPer.imprimir();
	}

	cout << "---La lista de Elementos Persona, eliminar del frente--- " << "\n" << endl;

	elemPer.eliminarDelFrente(new ElementoPersona(new Persona(0, "Andres")));
	elemPer.imprimir();

	cout << "---La lista de Elementos Persona, eliminar del final--- " << "\n" << endl;

	elemPer.eliminarDelFinal(new ElementoPersona(new Persona(4,"Daniel")));
	elemDou.imprimir();

	cout << "---La lista de Elementos Persona, eliminar del medio--- " << "\n" << endl;

	elemPer.eliminarDelMedio(2);
	elemPer.imprimir();

	cout << "---La lista de Elementos Persona, insertar al medio--- " << "\n" << endl;
	elemPer.insertarAlMedio(new ElementoPersona(new Persona(6,"Mario")),1);
	elemPer.imprimir();


	system("pause");
	return 0;
} // fin de main





