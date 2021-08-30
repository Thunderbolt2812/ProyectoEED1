#ifndef LISTA_HPP
#define LISTA_HPP
#include "Nodo.hpp"
using namespace std;
class Lista{
	public:
		Lista();
		Lista(const Lista& L);
		virtual ~Lista();
		bool Inserta(int, TDato* );
		TDato* Suprime(int);
		void Anula();
		int Localiza(TDato*);
		TDato* Siguiente(int);
		TDato* Anterior(int);
		TDato* Recupera(int);
		void Imprime();
		TDato* Primero();
		bool Vacia();
		int Elementos;
	private:
		Nodo* inicio;
		Nodo* Salto(int); 
};

#endif