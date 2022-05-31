#include <iostream>
using namespace std;

int main(){
//uso de sentencias de control
//do while

/*int i=1;
do{

//crear un programa que imprima hasta el 
cout<<i<<endl;
i++;

}while(i<11);
*/

/*int cont=1;
while(cont<=10){
	cout<<cont<<endl;
	cont++;
	
}
cout<<"se acabo";*/


//for

/*for(int i=1; i<=10; i++)			
    cout<<i<<endl;
    */

int seleccion;
do{
	cout<<"\n Menu 1, 2, 3 otra opcion salir \n";
	cout<<"\n 1.- Opcion 1 \n";
	cout<<"\n 2.- Opcion 2 \n";
	cout<<"\n 3.- Opcion 3 \n";
	cout<<"\n Salir \n";
	cout<<"\n Ingrese la Opcion \n";
	
	switch(seleccion){
		case 1:
			cout<<"Opcion 1";
			break;
			cout<<"Opcion 2";
			break;
			cout<<"Opcion 3";
			break;
			default:
				cout<<"Ayos";
				break;
	}
	
}while((seleccion>0)&&(seleccion<4));




}

