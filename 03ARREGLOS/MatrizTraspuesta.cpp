#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int A[10][10], At[10][10], filas, columnas;
	
	cout<<"Ingrese el numero de filas: ";
	cin>>filas;
	
	cout<<"Ingrese el numero de columnas: ";
	cin>>columnas;
	
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			cout<<"Ingrese el numero que ira en la posicion ["<<i+1<<"]["<<j+1<<"] ";
			cin>>A[i][j];
		}	
	}
	
	cout<<"\n"<<"Tu matriz es: "<<"\n";
	
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			cout<<A[i][j]<<" ";
			
		}
		cout<<"\n";
	}
	
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			At[i][j] = A[j][i];
		}	
	}

	cout<<"\n"<<"Tu matriz traspuesta es: "<<"\n";

	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			cout<<At[i][j]<<" ";
			
		}
		cout<<"\n";
	}
	
}
