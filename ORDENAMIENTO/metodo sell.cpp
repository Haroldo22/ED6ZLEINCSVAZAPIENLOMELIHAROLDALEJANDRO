
#include<iostream>
#include<conio.h>

using namespace std;
int numeros[100];
void ingresar(int n);
void mostrar(int n);
void Shell(int n);

int main(){
    int n;
    cout<<"Ingrese la cantidad de numeros a introducir: ";
    cin>>n;
    ingresar(n);
    Shell(n);
    mostrar(n);
    cout<<endl;
    return 0;
}

void ingresar(int n){
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<"numeros["<<i<<"]=";
        cin>>numeros[i];
    }
}

void mostrar(int n){
    int i;
    cout<<"elementos ordenados por metodo Shell"<<endl;
    for(i=1;i<=n;i++)
    {
        
        cout<<"\t"<<numeros[i];
    }
}

void Shell(int Numero){
    int i,j,k,incremento,aux;
    
    incremento=Numero/2;
    
    while(incremento>0){
        for(i=incremento+1;i<=Numero;i++){
            j=i-incremento;
            while(j>0){
                if(numeros[j]>=numeros[j+incremento]){
                    aux = numeros[j];
                    numeros[j] = numeros[j+incremento];
                    numeros[j+incremento] = aux;
                    cout<<"numeros: "<<numeros[i]<<"\n";
                }
                else{
                        j=0;
                        cout<<"numeros: "<<numeros[i]<<"\n";
                    }
                j=j-incremento;
            }
            
        }
        incremento=incremento/2;
    }
}
