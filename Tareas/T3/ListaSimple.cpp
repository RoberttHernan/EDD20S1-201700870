#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
using namespace std ;



struct Estudiante {
	int carnet;
	string nombre;
}persona;
struct Nodo {
	Estudiante dato ;
	Nodo *siguiente ;
	
};

void insertarLista (Nodo *&, Estudiante);
void mostrarLista (Nodo *);
void buscarNodo (Nodo *, int posicion);


int main (){
	Nodo *lista = NULL;
	int carnet,tamanio_lista;
	string nombre;
	
		
	cout<<"Ingrese carnet"<<endl;
	cin>> carnet;
	cout<< "Ingrese nombre"<< endl;
	cin>>nombre ;
	persona.carnet = carnet;
	persona.nombre = nombre;
	
	insertarLista(lista, persona);
	tamanio_lista++;
	
	
	
	mostrarLista(lista);

	

	return 0;
}

void insertarLista (Nodo *&lista, Estudiante estudiante){
	
	
	
	
	Nodo *nuevo_nodo = new Nodo ();
	nuevo_nodo -> dato = estudiante ;
	
	Nodo *aux1 = lista ;
	
	
	if (lista == aux1)
	{
		lista = nuevo_nodo;
	}
	nuevo_nodo -> siguiente = aux1;
	cout <<"Elemento insertado correctamente"<<endl;
}


/*void mostrarLista (Nodo *lista){
		Nodo *actual = new Nodo ();
		actual = lista ;
		
		while (actual != NULL){
			cout<< actual -> dato.nombre << " -> "<< endl;
			actual = actual -> siguiente;
			
			
		}
		
	}
	*/
	void buscarNodo (Nodo *lista, int posicion){
		int contador = 0;
		Nodo *actual = new Nodo ();
		actual = lista ;
		
		while (actual !=null && posicion <= tamanio_lista){
			actual = actual -> siguiente ;
			contador ++;
			if (contador == posicion){
			cout << actual -> dato.nombre << "->" << endl ;
			}
			}
		}
	}
	
	
	

	
