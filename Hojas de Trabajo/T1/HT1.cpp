#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

template <typename E>

class MatrizDinamica {
private:
	int filas,columnas;
	E** matriz;
	
	public:
		MatrizDinamica (int nFilas, int nColumnas) throw(runtime_error){
			if (nFilas || nColumnas <=0){
				throw runtime_error("El numero de filas y columnas debe ser mayor a 0");
			}
			this.filas = nFilas;
			this.columnas = nColumnas;
			this.matriz = new E*[filas];
			for ( int i =0;i<filas; i++){
				matriz [i] = new E[columnas];
			}
		}
		~MatrizDinamica (){
			for (int i =0;i<filas; i++){
				delete [] matriz[i];
			}
			delete [] matriz;
		}
		E getValue(int nFila, int nColumna) throw(runtime_error){
			if (nFila < 0 || nFila >= filas){
				throw runtime_error("Fila invalida");
			}
			if (nColumna < 0 || nColumna >= columnas){
				throw runtime_error("Columna invalida");
			}
			return matriz[nFila][nColumna];
		}
		
		void setValue(int nFila, int nColumna, E valor) throw(runtime_error){
			if (nFila < 0 || nFila >= filas) {
			throw runtime_error("Fila invalida");
		}
		if (nColumna < 0 || nColumna >= columnas) {
			throw runtime_error("Invalid column.");
		}
		matriz[nFila][nColumna] = valor;
		}
		int getFilas() {
		return filas;
	}
	int getColumnas() {
		return columnas;
	}
	
	

};
int main (){
	
	MatrizDinamica<int> matriz (10,15);
	for (int i = 0; i < matriz.getFilas(); i++) {
		for (int j = 0; j < matriz.getColumnas(); j++) {
			matriz.setValue(i, j, i + j);
		}
	}
		for (int i = 0; i < matriz.getFilas(); i++) {
		for (int j = 0; j < matriz.getColumnas(); j++) {
			cout << matriz.getValue(i, j) << "\t";
		}
		cout << endl;
	}
	
	return 0;
}
