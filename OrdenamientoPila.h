#include <stdio.h>
#include <stdlib.h>

typedef struct Pila{
	int tope;	  //Último valor en la pila
	int elem[5]; //Cantidad de elementos que se podrán almacenar en la pila
}pila;

pila crearPila(){
	pila p;		//Se crea una pila
	p.tope = 0; //El tope se coloca a cero
	return p;	//Retorna la pila
}

int evaluarPila(pila p){
	if(p.tope == 0){ //Si el tope en la pila es igual a cero...
		return 1;    //Retorna un uno que significa que sí está vacía
	}else{
		return 0;    //Retorna un cero que significa que no está vacía
	}
}

void llenarPila(pila *p, int x){
	p->elem[p->tope] = x; //La pila en su elemento de posición tope es igual a x.
	p->tope++;            //El tope se aumenta en 1
}

int sacarPila(pila* p){
	if(evaluarPila(*p) == 1){    //Si la pila está vacía...	
		printf("\n La pila esta vacia"); //Imprime un mensaje de que está vacía
		return -1; 	             //Retorna -1
	}else{
		int aux = p->elem[p->tope-1];    //El auxiliar es igual a la lista en su elemento menos 1
		p->tope--;				//Disminuye en uno la pila
		return aux;				//Retorna el auxiliar para mostrar la pila
	}
}

int top(pila p){ 			 //Devuelve el último valor ingresado a la pila
	if(evaluarPila(p) == 1){ //Si la pila está vacía...
		printf("\nLa pila esta vacia"); //Muestra un mensaje de que está vacía
		return -1;           //Y regresa -1
	}else{ //De lo contrario
		return p.elem[p.tope-1];        //Regresa la pila en la posición tope-1
	}
}
