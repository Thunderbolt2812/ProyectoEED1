#ifndef LISTA_HPP
#define LISTA_HPP
#include "Nodo.hpp"
using namespace std;
class Lista{
	public:
		Lista();
		Lista(const Lista& L);
		virtual ~Lista();
		bool Inserta(int, Task* );
		Task* Suprime(int);
		void Anula();
		int Localiza(Task*);
		Task* Siguiente(int);
		Task* Anterior(int);
		Task* Recupera(int);
		void Imprime();
		Task* Primero();
		bool Vacia();
		int Elementos;
	private:
		Nodo* inicio;
		Nodo* Salto(int); 
};

#endif