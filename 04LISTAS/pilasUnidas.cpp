/*
vamos a programar dos pilas
que sirvan para poder unir ambos elementos 
el programa debe contener 
ingresar el tama�o de la pila
un menu
push, pop y mostrar los elementos de las pilas
*/
#include<iostream>
#include<conio.h>

using namespace std;

//vamos a definir una pila dentro de otra
struct nodo{ 
	int nro;
    struct nodo *siguiente;
};

//definir una estructura de la pila
typedef nodo *pila;

//metodos del programa
void imprimir1(pila);
void imprimir2(pila);
void push(pila &, int);
void unirPilas(pila , pila );
void eliminarPila(pila &, int);
void moverValor(pila, pila);

main(){ 
//detectar las pilas
	pila p1=NULL;
  	pila p2=NULL;
  	pila p=NULL;
  	

	int opc,n,valor,i;
		
	do{
		cout<<"1 Apilar"<<endl;
	 	cout<<"2 Ver pila"<<endl;
	   	cout<<"3 Unir"<<endl;
	 	cout<<"4 Eliminar pila"<<endl;
	 	cout<<"5 Salir "<<endl;
	 	cout<<"Ingrese una opcion"<<endl;
	 	cin>>opc;
	 	
	 switch(opc){
	 	case 1:
		 
			cout<<"limite de la pila"<<endl; 
			cin>>n;
		    cout<<"Ingresar pila 1"<<endl;
		    
			    for(i=0;i<n;i++){
				    cout<<"valor:"<<endl;
				    cin>>valor;
				    push(p1,valor);
				    }
		    
		    cout<<"Ingresar pila 2"<<endl;
		    
		        for(i=0;i<n;i++)
		           {cout<<"Elemento:"<<endl;
		            cin>>valor;
		      		push(p2,valor);
		            }
		   break;
		
		case 2:
			cout<<"Contenido de la pila 1"<<endl;
			imprimir1(p1);
			cout<<"Contenido de la pila 2"<<endl;
			imprimir1(p2);
			break;
		
		case 3:
		    cout<<"Pilas unidas"<<endl;
		        moverValor(p1,p2);
		           break;
		           
		case 4:
			
			cout<<"Pila eliminada"<<endl;
		 }
		 
	}while(opc!=5);
}
	
	void moverValor(pila p1, pila p2){
	pila q = p1;
	
		p2=p2->siguiente;
		p2=p2->siguiente;
	
	/*while(q->siguiente!=NULL){
			q = q->siguiente;
	}*/
	q->siguiente=p2;
}

	
	void push(pila &p, int n){
	 pila q=new(struct nodo);
	  q->nro=n;
	  q->siguiente=p;
	  p=q;
	}
	
	
	void unirPilas(pila p1, pila p2){
	  pila q=p1;
	  while(q->siguiente!=NULL)
	  q=q->siguiente;
	  q->siguiente=p2;
	}

	void imprimir1(pila p1){
	 while(p1!=NULL)
	 {cout<<p1->nro<<endl;
	  p1=p1->siguiente;
	 }
	cout<<endl;
	}
	
	void imprimir2(pila p2){
	 while(p2!=NULL)
	 {cout<<p2->nro<<endl;
	  p2=p2->siguiente;
	 }
	cout<<endl;
	}
	
	void elimiarPila(pila &p, int n){
	nodo *aux = p;
	n = aux -> nro;
	p = aux -> siguiente;
	delete aux;
	}
