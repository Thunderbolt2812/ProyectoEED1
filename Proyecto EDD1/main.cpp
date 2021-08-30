#include "Lista.hpp"
#include "TDato.hpp"
using namespace std;
int main() {
	Lista* lista = new Lista();
	cout<<"Prueba 1: Agregar"<<endl;
	TDato* dato = new TDato ("Hello");
	TDato* dato1 = new TDato ("World");
	TDato* dato2 = new TDato ("!");
	lista->Inserta(0,dato);
	lista->Inserta(1,dato1);
	lista->Inserta(2,dato2);
	cout << "Datos agregados exitosamente." <<endl;
	cout<<endl;
	lista->Imprime();
	cout<<"Prueba 2: Suprimir"<<endl;
	lista->Suprime(1);
	lista->Imprime();
	cout << "Dato suprimido exitosamente." <<endl;
	cout<<"Prueba 3: Primero"<<endl;
	cout << "Primero: " ;
	lista->Primero();
	cout<<endl;
	cout<<"Prueba 4: Anular"<<endl;
	lista->Anula();
	cout << "Elementos borrados exitosamente." <<endl;
	lista->~Lista();
	return 0;
}