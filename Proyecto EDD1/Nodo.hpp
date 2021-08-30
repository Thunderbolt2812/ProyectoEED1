#ifndef NODO_HPP
#define NODO_HPP
#include "TDato.hpp"
#include <string>
#include <iostream>
using namespace std;
class Nodo {
	public:
		Nodo();
		Nodo(TDato*);
		Nodo(const Nodo& N);
		virtual ~Nodo();
		TDato* getDato();
		void setDato(TDato*);
		void setAnterior(Nodo*);
		Nodo* getAnterior();
		void setSiguiente(Nodo*);
		Nodo* getSiguiente();
		Nodo* Siguiente;
		Nodo* Anterior;
		TDato* Dato;
};
#endif