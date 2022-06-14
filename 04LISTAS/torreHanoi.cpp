#include<iostream>
#include<conio.h>

using namespace std;

struct nodo{ 
	int nro;
    struct nodo *siguiente;
};

typedef nodo *pila;

void push2(pila &, pila&);

void push(pila &, int);
void imprimir(pila);
void eliminar(nodo *&, int&);
void moverValor(pila, pila);

main (){
	
	pila p1=NULL;
	pila p2=NULL;
	pila p3=NULL;
	
	int op1, op2, n=7, n1=1, x=0;
	
	for(int i = 1; i <= n; i++){
		push(p1,i);
	}
	
	for(int i = 0; i < n1; i++){
		push(p2,i);
	}
	
	for(int i = 0; i < n1; i++){
		push(p3,i);
	}
	
	cout<<"Bienvenido al juego de las torres de Hanoi, a continuacion hay 3 pilas, la primera consta de una pila que va del 1 al 7, siendo el 1 la pieza mas grande y el 7 la mas pequeña."<<endl; 
	cout<<"Las siguientes dos pilas estan vacias. Para completar el juego, deberas de colocar las pilas de mayor a menos en la tercera pila, con la condicion de que no debe de haber un numero mas pequeño encima de uno mas grande"<<endl;
	
	cout<<"Esta es la primera pila: "<<endl;
	imprimir(p1);


	while(p1!=NULL && p2!=NULL){
	cout<<"Elige la pila a mover (1, 2, 3)"<<endl;
	cin>>op1;
	switch(op1){
		case 1:
			cout<<"Elige a que pila deseas mover(2, 3): "<<endl;
			cin>>op2;
			switch(op2){
				case 2:
					moverValor(p2,p1);
					eliminar(p1, n);
					cout<<"Pila 1: "<<endl;
					imprimir(p1);
					cout<<"Pila 2: "<<endl;
					imprimir(p2);
					cout<<"Pila 3: "<<endl;
					imprimir(p3);
					break;
				case 3:
					moverValor(p3,p1);
					eliminar(p1,n);
					cout<<"Pila 1: "<<endl;
					imprimir(p1);
					cout<<"Pila 2: "<<endl;
					imprimir(p2);
					cout<<"Pila 3: "<<endl;
					imprimir(p3);
					break;
			}
			break;
		
		case 2:
			cout<<"Elige a que pila deseas mover(1, 3): "<<endl;
			cin>>op2;
			switch(op2){
				case 1:
					moverValor(p1,p2);
					eliminar(p2, n);
					cout<<"Pila 1: "<<endl;
					imprimir(p1);
					cout<<"Pila 2: "<<endl;
					imprimir(p2);
					cout<<"Pila 3: "<<endl;
					imprimir(p3);
					break;
				case 3:
					moverValor(p3,p2);
					eliminar(p2,n);
					cout<<"Pila 1: "<<endl;
					imprimir(p1);
					cout<<"Pila 2: "<<endl;
					imprimir(p2);
					cout<<"Pila 3: "<<endl;
					imprimir(p3);
					break;
			}
			break;
			
		case 3:
			cout<<"Elige a que pila deseas mover(1, 2): "<<endl;
			cin>>op2;
			switch(op2){
				case 1:
					moverValor(p1,p3);
					eliminar(p3, n);
					cout<<"Pila 1: "<<endl;
					imprimir(p1);
					cout<<"Pila 2: "<<endl;
					imprimir(p2);
					cout<<"Pila 3: "<<endl;
					imprimir(p3);
					break;
				case 2:
					moverValor(p2,p3);
					eliminar(p3,n);
					cout<<"Pila 1: "<<endl;
					imprimir(p1);
					cout<<"Pila 2: "<<endl;
					imprimir(p2);
					cout<<"Pila 3: "<<endl;
					imprimir(p3);
					break;
			}
			break;
		
	}
	x++;
	cout<<"Haz realizado "<<x<<" movimiento(s)."<<endl;
}
	
	
}

void push(pila &p, int n){
	pila q = new(struct nodo);
	q->nro=n;
	q->siguiente=p;
	p=q;
}


void moverValor(pila p1, pila p2){
	pila q = p1;
	while(p2->siguiente!=NULL){
		p2=p2->siguiente;
	}
	while(q->siguiente!=NULL){
			q = q->siguiente;
	}
	q->siguiente=p2;
}

void imprimir(pila p1){
	while(p1 != NULL){
		cout<<p1->nro<<endl;
		p1 = p1->siguiente;
	}
}

void eliminar(nodo *&pila, int &n){
	nodo *aux = pila;
	n = aux->nro;
	pila = aux->siguiente;
	delete aux;
}


