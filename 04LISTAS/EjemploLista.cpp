
/*una lista es una estructura de datos que deriva una secuencia de datos conectada con nodos y cada una de las cuales contiene un dato
hay un nodo al comienzo llamado cabeza o frente
hay un nodo del termino llamado cola o atras

la lista solo puede ser recorrida en secuencia de atras hacia adelante

operaciones de su propia estructura

a�adir o insertar elemento
mover atraves de la lista de principio a fin
buscar elementos

apuntadores 

& de memoria
* al dato
-> asignacion 

ejemplo

nodo *elemento -> elemento -> valor

en c++ vamos a usar list ya que es una clase de tipo templete(plantilla) nos permite crear listas que contengan cualquier tipo de objeto

las operaciones que se oueden incluir en la lista son:

push meter
pop sacar

begin() inicio 
end() final

size() tama�o
empty() vacio

*/


#include<iostream>

using namespace std;

//definir la estructura de la lista
struct Nodo{
       //los valores de la lista
       int valor;
       Nodo *siguiente;
};

//definir los metodos
void insertarLista(Nodo *&, int);
void imprimirLista(Nodo *&, int &);

int main(){
	//declarar mi variable en una lista
	//que ap�nte null
	Nodo *lista = NULL;
	
	//variables
	int op = 1, c, i=0, valores;
	
	cout<<"Trabajando con listas(simples, doblemente enlazadas"<<endl;
	while(op != 3){
		cout<<"Ejemplo de lista simple: "<<endl;
		cout<<"1.- Insertar un nuevo valor "<<endl;
		cout<<"2.- Ver la lista "<<endl;
		cout<<"3.- Salir "<<endl;
		cin>>op;
		switch(op){
			case 1: 
			cout<<" Indica el numero de valores a introducir "<<endl;
			cin>>valores;
			while(i<valores){
				cout<<"Valor["<<i+1<<"]"<<endl;
				cin>>c;
				//insertar el valor
				insertarLista(lista, c);
				i++;
			}
		   break;
		   case 2:
			     cout<<"Mostrar los valores de la lista: "<<endl;
			     while(lista != NULL){
			     	imprimirLista(lista, c);
			     	if(lista != NULL){
			     		cout<<c<<", ";
					 }else{
					 	cout<<c<<". "<<endl;
					 }
			     	
				 }
			     break;
			default:
				cout<<"Gracias por mimir aqui uwu";
		}
	}
	return 0;
}  

void insertarLista(Nodo *&lista, int c){
	//crear una nueva lista
	Nodo *inslista = new Nodo();
	//debo de asignar el valor a la lista
	inslista->valor = c;
	
	inslista->siguiente = lista;
	
	lista = inslista;
	
	cout<<"\tEL numero "<<c<<" ha sido agregado a la lista"<<endl;
}

void imprimirLista(Nodo *&lista, int &c){
	Nodo *aux = lista;
	c = aux->valor;
	lista = aux->siguiente;
	delete aux;
	
}


