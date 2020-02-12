#ifndef DLL_H_
#define DLL_H_
#include <iostream>
#include "Nodo.h"
#include <string>
namespace ITLA {
	class DLL
	{
	public:
		DLL();
		~DLL();

		void insertarNodo(Nodo** head_ref, std::string data);
		void printLista(Nodo* nodo);
		void borrarUltimo(Nodo**head_ref);
		Nodo* buscar(Nodo* head, std::string data);

	private:

	};

	DLL::DLL()
	{
	}

	DLL::~DLL()
	{
	}
}


#endif // !DLL_H




