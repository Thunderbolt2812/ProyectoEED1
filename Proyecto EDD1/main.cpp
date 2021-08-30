#include "Lista.hpp"
#include "Task.hpp"
using namespace std;
int main() {
	Lista* lista = new Lista();
	cout<<"Prueba 1: Agregar tareas"<<endl;
	cout<<endl;
	Task* tarea = new Task ("Comprar huevos");
	Task* tarea1 = new Task ("Comprar leche");
	Task* tarea2 = new Task ("Comprar papel higienico");
	lista->Inserta(1,tarea);
	lista->Inserta(2,tarea1);
	lista->Inserta(3,tarea2);
	lista->Imprime();
	cout<<endl;
	cout << "Datos agregados exitosamente." <<endl;
	cout<<endl;
	cout<<"Prueba 2: Suprimir primer tarea"<<endl<<endl;
	lista->Suprime(1);
	lista->Imprime();
	cout<<endl;
	cout << "Dato suprimido exitosamente." <<endl<<endl;
	cout<<"Prueba 3: Primero"<<endl<<endl;;
	cout << "Primero: " ;
	Task* T = lista->Primero();
	cout<<T->getTask()<<endl<<endl;
	cout<<"Prueba 4: Anular"<<endl<<endl;
	lista->Anula();
	lista->Imprime();
	cout << "Elementos borrados exitosamente." <<endl;
	lista->~Lista();
	return 0;
}