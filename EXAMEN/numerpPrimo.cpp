#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main(){
	
	int opc, np = 2, x, i, n;
	
	cout<<"¿Cuantos numeros primos desea calcular?"<<endl;
	cin>>opc;
	
	cout<<"Estos son los numeros primos: "<<endl;
	
	
	for(n = 2; n <= opc; n++){
	
	i = 2;
	x = 1;
	
		for (i = 2; i <= np; i++){
			if (np % i == 0){
				x++;
			}
		}
		
		if(x <= 2){
			cout<<"- "<<np<<endl;
		}
		
		np++;
}
	
}
