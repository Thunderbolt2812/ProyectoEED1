#ifndef NODO_HPP
#define NODO_HPP
#include "Task.hpp"
#include <string>
#include <iostream>
using namespace std;
class Nodo {
	public:
		Nodo();
		Nodo(Task*);
		Nodo(const Nodo& N);
		virtual ~Nodo();
		Task* getDato();
		void setDato(Task*);
		void setAnterior(Nodo*);
		Nodo* getAnterior();
		void setSiguiente(Nodo*);
		Nodo* getSiguiente();
		Nodo* Siguiente;
		Nodo* Anterior;
		Task* Dato;
};
#endif