/*
Ejemplo de cola con prioridades
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

//vamos con la estructura nodo

struct nodo{
	string nombre;
	int prioridad;
	float dinero;
	struct nodo * siguiente;
};


//estructura de la cola
struct cola{
	nodo *delante;
	nodo *atras;
};

//funcion para crear un nodo nuevo

struct nodo *crearNodo(string x, int pri, float d){
	//vamos a crear ese nuevo nodo
	struct nodo *nuevoNodo = new (struct nodo);
	nuevoNodo->nombre=x;
	nuevoNodo->prioridad=pri;
	nuevoNodo->dinero=d;
	return nuevoNodo;
}


void encolar(struct cola &q, string x, int priori, float d){
	//necesito mi auxiliar
	struct nodo *aux = crearNodo(x, priori, d);
	aux->siguiente=NULL;
	
	if(q.delante == NULL){
		//es el primero en encolar
		q.delante=aux;
	}else{
		(q.atras)->siguiente = aux;
	}
	//siempre el aux debe apuntar al final
	q.atras = aux;
}

/*void depositar(struct cola &q, float d){
	struct cola *aux = new struct cola;
	aux->delante;
	aux->dinero = d;
}*/


void mostrarCola(struct cola q){
	//auxliar
	struct nodo *aux;
	
	aux = q.delante;
	
	cout<<"\n Caracter de Prioridad\n";
	
	while(aux!=NULL){
		//hay datos
		cout<<" "<<aux->nombre<<" | "<<aux->prioridad<<" | "<<aux->dinero<<endl;
		aux = aux->siguiente;
	} 
}


void ordenarPrioridad(struct cola &q){
	//criterio de 0 como prioridad
	//el numero mayor es la mas alta
	
	struct nodo *aux1, *aux2;
	int p_aux;
	string c_aux;
	
	aux1 = q.delante;
	
	while(aux1->siguiente != NULL){
		aux2 = aux1->siguiente;
		while(aux2!=NULL){
			if(aux1->prioridad > aux2->prioridad){
				p_aux = aux1->prioridad;
				c_aux = aux1->nombre;
				
				aux1->prioridad = aux2->prioridad;
				aux1->nombre = aux2->nombre;
				
				aux2->prioridad = p_aux;
				aux2->nombre = c_aux;
			}
			aux2=aux2->siguiente;
		}
		aux1 = aux1->siguiente;
	}
}

void insertar(struct cola &q, string c, int pri, float d){
	
	//encolar
	encolar(q, c, pri, d);
	
	//ordeno
	ordenarPrioridad(q);
	//nuevo comentario
}

void menu(){
	cout<<"\n Fila del banco\n";
	cout<<"	1.- Registrar cuenta\n";
	cout<<"	2.- Mostrar cuentas registradas\n";
	cout<<"	4.- Salir\n";
	
}

int main(){
	struct cola q;
	
	q.delante = NULL;
	q.atras = NULL;
	
	string nombre; //caracter del dato
	int priori; //prioridad
	float d=0;//dinero
	int op; //opcion
	
	do{
		menu();
		cin>>op;
		switch(op){
			case 1:
				cout<<"\n Ingrese un nombre: \n";
				cin>>nombre;
				cout<<"\n Ingrese prioridad de la cuenta\n	0 - Sin cuenta\n	1 Cuenta normal\n	2 - Cuenta empresarial\n	3 - Cuenta VIP\n";
				cin>>priori;
				cout<<"\n Ingrese el monto a depositar: \n";
				cin>>d;
				
				insertar(q, nombre, priori, d);
				
				cout<<"\nCliente "<<nombre<<" ha sido registrado\n";
				break;
			case 2:
				cout<<"\n Fila actual:\n";
				if(q.delante!=NULL){
					mostrarCola(q);
				}else{
					cout<<"\n La cola esta vacia\n";
				}
				break;
			default:
				cout<<" Ingrese una opcion valida\n";
				system("pause");
				exit(0);			
		}
		system("pause");
		system("cls");
	}while(op!=4);
	return 0;
}





