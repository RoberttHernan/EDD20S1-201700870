#include "DLL.h"
#include <cstdlib>
#include <string>
#include <iostream>


namespace ITLA {
	
	void DLL::insertarNodo(Nodo** head_ref, std::string val) {
		Nodo* new_node = new Nodo ();
		new_node->setData(val);

		new_node->setNext(*head_ref);
		new_node->setPrev(NULL);

		if ((*head_ref)!=NULL)
		{
			
			(*head_ref)->setPrev(new_node);
		}
		(*head_ref) = new_node;
	}
	void DLL::printLista(Nodo* nodo) {
		while (nodo->getNext() !=NULL )
		{
			std::cout << nodo->getData() << std::endl;
			nodo = nodo->getNext();
		}
		std::cout << nodo->getData ()<< std::endl;
	}
	void DLL::borrarUltimo(Nodo** head_ref){
		if(*head_ref==NULL){
			return;
		}
		Nodo* aux = *head_ref;
		while (aux->getNext()!=NULL)
		{
			aux = aux->getNext();
				
		}
		aux->getPrev()->setNext (NULL);
		free(aux);
		return;
		
	}
	Nodo* DLL::	buscar(Nodo *head, std::string data){
	
		Nodo * aux = head;
		while(aux!=NULL){
			
			if(aux->getData()==data){
			return aux;
			
			}aux = aux->getNext();
			
		}
		return NULL;
	}
}

