#include "Nodo.hpp"
Nodo::Nodo() {
	Anterior = 0;
	Dato = 0;
	Siguiente = 0;
}
Nodo::Nodo(Task* Dato1) {
	Siguiente = 0;
	Anterior = 0;
	if(Dato)
		this->Dato = Dato1;
	else
		Dato=0;
}
void Nodo::setAnterior(Nodo* Anterior) {
	this->Anterior = Anterior;
}
Nodo* Nodo::getAnterior()  {
	return Anterior;
}
void Nodo::setSiguiente(Nodo* Siguiente) {
	this->Siguiente = Siguiente;
}
Nodo* Nodo::getSiguiente()  {
	return Siguiente;
}
Task* Nodo::getDato() {
	return Dato;
}
void Nodo::setDato(Task* Dato1) {
	Dato = Dato1;
}
Nodo::Nodo(const Nodo& N) {
}
Nodo::~Nodo() {
	if(this->Dato) {
		delete this->Dato;
	}
	if(this->Siguiente) {
		delete this->Siguiente;
	}
}