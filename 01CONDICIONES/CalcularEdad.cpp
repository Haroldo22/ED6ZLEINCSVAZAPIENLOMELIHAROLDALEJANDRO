#include<iostream>
using namespace std;

int main (){
	
	int dia, mes, ano, edad;
	
	int anoa = 2022, mesa = 5, diaa =  25;
	
	cout<<"Ingesa tu dia de nacimiento: "<<endl;
	cin>>dia;
	
	cout<<"Ingesa tu mes de nacimiento: "<<endl;
	cin>>mes;
	
	cout<<"Ingesa tu año de nacimiento: "<<endl;
	cin>>ano;
	
	if (mes <= mesa  && dia <=  diaa){
	    edad = anoa - ano;
	   
	} else {
	    edad = anoa  - ano - 1;
	}
	
	cout<<"Tienes "<<edad<<" años"<<endl;
	
	
	
	if( edad >= 18){
		cout<<"Es mayor de edad";
	}else{
		cout<<"Es menor de edad";
	}
	
	
}

