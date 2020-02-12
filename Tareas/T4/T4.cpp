/*
Practica 1, Estructura de Datos
Roberto Enrique Calvillo Hernandez 201700870
*/


#include <iostream>
#include <string>
#include "Nodo.cpp"
#include "DLL.cpp"

using namespace ITLA;




int main()
{
	
	Nodo* head = NULL;
	DLL* lista = new DLL();

	lista->insertarNodo(&head, "s");
	lista->insertarNodo(&head, "t");
	lista->insertarNodo(&head, "f");
	lista->borrarUltimo(&head);
	
	Nodo * buscado = lista->buscar(head,"f");
	if(buscado !=NULL){
		std:: cout << "Nodo encontrado exitosamente"<< std::endl;
	}else{
		std:: cout <<"Nodo no encontrado"<<std::endl;
	}
	
	lista->printLista(head);
	
	

	

}



