/* 
vamos a crear una pila como elememto
basico para 
poder demostar que 
las primeras entradas
son las ultimas salidas 
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

//definir la pila
struct Nodo{
	int valor;
	Nodo *siguiente;
};

//metodos 
void insertarPila(Nodo *&, int);
void mostrarPila(Nodo *&);
void eliminarPila(Nodo *&, int);


int main(){
	//el primero en entrar es el ultimo en salir, el ultimo que entra es el primero que sale
	
	int cantidad, i=0, v, op=1;
	
//primera definicion de la pila
Nodo *pila = NULL;

while(op!=4){
	cout<<"Selecciona la opcion deseada: ";
	cout<<"1.- Inserta valor:\n";
	cout<<"2.- Mostrar valores:\n";
	cout<<"3.- Eliminar valor:\n";
	cout<<"4.- Salir:\n";
	
	cin>>op;
	
	switch(op){
		
		case 1: 
			cout<<"Ingresa la cantidad de datos a introducir en la pala:\n";
			cin>>cantidad;
			while(i<cantidad){
				cout<<"Ingresa el valor: \n";
				cin>>v;
				insertarPila(pila, v);
				i++;
			}
		break;
		
		case 2:
			cout<<"Mostrando pila:\n";
			mostrarPila(pila);
			break;
			
		case 3:
			//saber si esta vacia
			if(pila==NULL){
				cout<<"No se puede eliminar, pila vacia:\n";
			}else{
				cout<<"Eliminar dato\n";
				while(pila!=NULL){
					eliminarPila(pila, v);
					if(pila!=NULL){
						cout<<""<<endl;
					}else{
						cout<<" * "<<endl;
					}
				}
			}
			break;
		
		default:
			cout<<"La opcion deseada no existe\n";
		
	}
	
}
return 0;
	
}

void insertarPila(Nodo *&pila, int v){
	//creamos el nodo
	Nodo *insPila = new Nodo();
	insPila -> valor = v;
	insPila -> siguiente = pila;
	pila = insPila;	
}

void mostrarPila(Nodo *&pila){
	//necesitamos un elemento que almacene los valores
	Nodo *aux;
	
	if(pila==NULL){
		cout<<"La pila esta vacia, no hay nada que mostrar";
	}else{
		aux = pila;
		while(aux!=NULL){
			cout<<"Valor : "<<aux->valor<<endl;
			aux = aux->siguiente;
		}
	}
}

void elimiarPila(Nodo *&pila, int &v){
	Nodo *aux = pila;
	v = aux -> valor;
	pila = aux -> siguiente;
	delete aux;
}
