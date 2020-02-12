#ifndef NODO_H_
#define NODO_H_
#include <string>

namespace ITLA {
	class Nodo
	{
	private:
		Nodo* next;
		Nodo* prev;
		std::string data;

	public:
		void setNext(Nodo* next) {
			this->next = next;
		}
		void setPrev(Nodo* prev) {
			this->prev = prev;
		}
		void setData(std::string data) {
			this->data = data;
		}
		Nodo* getNext() {
			return next;

		}
		Nodo* getPrev() {
			return prev;
		}
		std::string getData() {
			return data;
		}
		Nodo();
		virtual ~Nodo();



	};


}

#endif // !NODO_H_


