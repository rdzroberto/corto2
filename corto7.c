


#include <stdio.h>

int main()
{
	
	
	
	int tamanio;
	
	printf("Ingrese el tamanio del vector");
	scanf("%d", &tamanio);

int vector[tamanio];

int i, *p; 

p=vector;

for(i=0; i<tamanio; i++){
	
printf("ingrese un valor\n");
scanf("%d n/", &p[i]); 
}
	
	
	for(i=0; i<tamanio; i++){
	printf ("valor: %i \n", *p++);
	
	}
for(i=0; i<tamanio; i++){
	printf("posicion : %i \n", p++);
	
	}
	
	
	
	return 0;
}

