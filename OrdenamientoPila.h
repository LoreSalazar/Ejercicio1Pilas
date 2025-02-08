#include <stdio.h>
#include <stdlib.h>

typedef struct Pila{
	int tope;	  //�ltimo valor en la pila
	int elem[5]; //Cantidad de elementos que se podr�n almacenar en la pila
}pila;

pila crearPila(){
	pila p;		//Se crea una pila
	p.tope = 0; //El tope se coloca a cero
	return p;	//Retorna la pila
}

int evaluarPila(pila p){
	if(p.tope == 0){ //Si el tope en la pila es igual a cero...
		return 1;    //Retorna un uno que significa que s� est� vac�a
	}else{
		return 0;    //Retorna un cero que significa que no est� vac�a
	}
}

void llenarPila(pila *p, int x){
	p->elem[p->tope] = x; //La pila en su elemento de posici�n tope es igual a x.
	p->tope++;            //El tope se aumenta en 1
}

int sacarPila(pila* p){
	if(evaluarPila(*p) == 1){    //Si la pila est� vac�a...	
		printf("\n La pila esta vacia"); //Imprime un mensaje de que est� vac�a
		return -1; 	             //Retorna -1
	}else{
		int aux = p->elem[p->tope-1];    //El auxiliar es igual a la lista en su elemento menos 1
		p->tope--;				//Disminuye en uno la pila
		return aux;				//Retorna el auxiliar para mostrar la pila
	}
}

int top(pila p){ 			 //Devuelve el �ltimo valor ingresado a la pila
	if(evaluarPila(p) == 1){ //Si la pila est� vac�a...
		printf("\nLa pila esta vacia"); //Muestra un mensaje de que est� vac�a
		return -1;           //Y regresa -1
	}else{ //De lo contrario
		return p.elem[p.tope-1];        //Regresa la pila en la posici�n tope-1
	}
}
