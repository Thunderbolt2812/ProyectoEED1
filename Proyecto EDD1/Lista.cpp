#include "Lista.hpp"
#include <iostream>
Lista::Lista() {
	inicio = 0;
	this->Elementos = 0;
}
Lista::Lista(const Lista& L) {
}
Lista::~Lista() {
	delete inicio;
}
Nodo* Lista::Salto(int pos) {
	Nodo* aux = inicio;
	for(int i = 1; i<pos -1 ; i++) {
		aux = aux->getSiguiente();
	}
	return aux;
}
void Lista::Imprime() {
	int auxi = Elementos;
	if(Elementos > 0){
		Nodo* aux = inicio;
		while(auxi > 0){
			cout<<aux->getDato()->getTask()<<endl;
			aux = aux->getSiguiente();
			auxi--;
		}
	}
}
bool Lista::Inserta(int pos, Task* dato) {
	if ((pos < 1 || pos > Elementos + 1)) {
		return false;
	} else {
		if (pos == 1 && dato != NULL) {
			Nodo *aux = new Nodo();
			aux->setDato(dato);
			aux->setSiguiente(inicio);
			if (inicio != NULL) {
				inicio->setAnterior(aux);
			}else{
				inicio=aux;
			}
			Elementos++;
			return true;
		} else {
			if (pos == Elementos + 1) {
				Nodo *aux = Salto(pos);
				Nodo *aux2 = new Nodo();
				aux2->setDato(dato);
				aux->setSiguiente(aux2);
				aux2->setAnterior(aux);
				Elementos++;
				return true;
			} else {
				Nodo *aux = Salto(pos);
				Nodo *aux2 = new Nodo();
				Nodo *aux3 = Salto(pos + 1);
				aux2->setDato(dato);
				aux2->setAnterior(aux);
				aux2->setSiguiente(aux3);
				aux3->setAnterior(aux2);
				Elementos++;
				return true;
			}
		}
	}
}
Task* Lista::Suprime(int pos) {
	Task* valor = NULL;
	if (pos > 0 && pos <= Elementos) {
		Nodo* aux = inicio;
		Nodo* aux2;
		if (pos == 1) {
			aux2 = aux->getSiguiente();
			if (aux2) {
				aux->setSiguiente(NULL);
				aux2->setAnterior(NULL);
				valor = aux->getDato();
				aux->setDato(NULL);
				delete aux;
				inicio = aux2;
				aux = NULL;
			} else {
				valor = aux->getDato();
				aux->setDato(NULL);
				delete aux;
				aux = NULL;
				inicio = NULL;
			}
		} else {
			aux = Salto(pos);
			aux2 = aux->getSiguiente();
			aux->setSiguiente(aux2->getSiguiente());
			if (pos != Elementos) {
				aux->getSiguiente()->setAnterior(aux);
			}
			valor = aux2->getDato();
			aux2->setSiguiente(NULL);
			aux2->setAnterior(NULL);
			aux2->setDato(NULL);
			delete aux2;
		}
		Elementos--;
	}
	return valor;
}
void Lista::Anula() {
	delete inicio;
	inicio=NULL;
	while (inicio) {
		Nodo* aux;
		aux = inicio;
		inicio = inicio->getSiguiente();
		if (aux->getDato()) {
			delete aux->getDato();
			aux->setDato(NULL);
			aux->setSiguiente(NULL);
		}
		delete aux;
	}
	Elementos = 0;
}
int Lista::Localiza(Task* obj) {
	int num = 1;
	Nodo *aux = inicio;
	while ((aux != NULL) && (num <= Elementos)) {
		if (aux->getDato()->equals(obj)) {
			return num;
		} else {
			num++;
		}
		aux = aux->getSiguiente();
		if(inicio) {
			delete inicio;
			inicio=NULL;
			Elementos = 0;
		}
	}
	return -1;
}
Task* Lista::Siguiente(int pos) {
	if (pos < 1 || pos >= Elementos) {
		Task* valor = NULL;
		return valor;
	} else {
		Nodo *aux = Salto(pos + 2);
		return aux->getDato();
	}
}
Task* Lista::Anterior(int pos) {
	if (pos > 1 && pos <= Elementos) {
		Nodo* aux = inicio;
		aux = Salto(pos);
		return aux->getDato();
	} else {
		return NULL;
	}
}
Task* Lista::Recupera(int pos) {
	if (pos == 1) {
		return Primero();
	} else if (pos >= 2 && pos <= Elementos ) {
		Nodo* aux = Salto(pos);
		return aux->getSiguiente()->getDato();
	} else {
		return 0;
	}
}
Task* Lista::Primero() {
	if(inicio)
		return inicio->getDato();
	else
		return 0;
}
bool Lista::Vacia() {
	return inicio == 0;
} 