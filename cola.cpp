#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *sig;
};
int frente();
void agregar(int );
void eliminar();
Nodo *cola=NULL;

int main(int argc, char** argv){
	int dato,opcion;

	do{
			cout<<"\nMENU"<<endl;
	cout<<"1. Llenar Nodos"<<endl;
	cout<<"2. Mostar Datos de Nodos"<<endl;
	cout<<"3. Eliminar"<<endl;
	cin>>opcion;
	switch (opcion){
        case 1:
        	cout<<"Llenado de Nodos"<<endl;
        	cin>>dato;
        	cout<<endl;
        	agregar(dato);
        	system("cls");
			break;
        case 2:
            cout<<"Mostrar los datos de Nodos ";
            cout<<frente();
            break;
        case 3:
        	cout<<"Elmininar";
        	eliminar();
            break;
        }
	}while(opcion!=4);
	return 0;
}

int frente(){
	if(cola!=NULL){
		return cola->dato;
	}
	return -1;
}

void agregar(int nuevo ){
	if(cola==NULL){
		cola=new Nodo();
		cola->dato=nuevo;
		cola->sig=NULL;
	}else{
		Nodo *aux=cola;
		while(aux->sig!=NULL){
			aux=aux->sig;
		}
		aux->sig=new Nodo();
		aux=aux->sig;
		aux->dato=nuevo;
		aux->sig=NULL;
	}
}


void eliminar(){
	if(cola==NULL)return ;
	Nodo *aux=cola;
	cola=cola->sig;
	delete aux;
}
