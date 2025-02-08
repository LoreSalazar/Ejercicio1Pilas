//Se pretende encontrar el menor número ingresado por el usuario usando pilas

#include "OrdenamientoPila.h"

int numMenor(pila miPila, pila Paux);

int main(){
	
	int i = 0, n;
	
	pila miPila = crearPila();
	pila Paux   = crearPila();
	
	for(i=0; i<=4; i++){
		printf("Senior usuario por favor introduzca su numero: \n");
		scanf("%d", &n);
		fflush(stdin);
		llenarPila(&miPila, n);
		
		if(i==4){
			continue;	
		}else{
			llenarPila(&Paux, n);
		}
		
	}
	
	printf("\nSenior usuario de los numeros que introdujo, el menor es: %d", numMenor(miPila, Paux));
	
	return 0;
}

int numMenor(pila miPila, pila Paux){
	
	pila Pmenor = crearPila();
	pila Pmenos = crearPila();
	pila Pmenol = crearPila();
	int x=3, flag=0, i=0, j=0, k=0;
	
	while(flag == 0){
		for(i=0; i<=x; i++){
	
			if(top(miPila) < top(Paux)){
				llenarPila(&Pmenor, sacarPila(&miPila));
				sacarPila(&Paux);
				printf("\n Pila menor1: %d", top(Pmenor));
			}else{
				llenarPila(&Pmenor, sacarPila(&Paux));
				sacarPila(&miPila);
				printf("\n Pila menor2: %d", top(Pmenor));
			}
		}

		Pmenol = Pmenor;
		
		j = top(Pmenos);
		k = top(Pmenor);
		if(j == k){
			return j;
			flag = 1;
		}if(j == k+1){
			return j -= 1;
			flag = 1;
		}if(top(Pmenor) == -1){
			return top(Pmenos);
		}

		Pmenos = Pmenor;
		printf("\n*******************\n");
		
		for(i=0; i<=x; i++){
			llenarPila(&miPila, sacarPila(&Pmenor));
			if(i==x){
				continue;	
			}else{
				llenarPila(&Paux, sacarPila(&Pmenos));
			}
		}
	
		x = x-1;	
		
	}
	
}
