#include <stdio.h>

#include "funciones.h"


int main(int argc, char * argv[]){
int opcion=0;
while(opcion != 5){
printf("\n 1 - sumar");
printf("\n 2 - restar");
printf("\n 3 - multiplicar");
printf("\n 4 - dividir");
printf("\n 5 - salir");
printf("Introduzca el numero de la función deseada: ");
int op1;
int op2;
scanf("%d", &opcion);
switch(opcion) {
	case 1:
	printf("Introduzca el primer operando mayor o igual a cero: ");
	scanf("%d", &op1);
	printf("Introduzca el segundo operando mayor o igual a cero: ");
	scanf("%d", &op2);
	printf("Resultado de la suma: %d",sumar(op1,op2));
	break;
	case 2:
	printf("Introduzca el primer operando mayor o igual a cero: ");
	scanf("%d", &op1);
	printf("Introduzca el segundo operando mayor o igual a cero: ");
	scanf("%d", &op2);
	printf("Resultado de la resta: %d",restar(op1,op2));
	break;
	case 3:
	printf("Introduzca el primer operando mayor o igual a cero: ");
	scanf("%d", &op1);
	printf("Introduzca el segundo operando mayor o igual a cero: ");
	scanf("%d", &op2);
	printf("Resultado de la multiplicacion: %d",multiplicar(op1,op2));
	break;
	case 4:
	scanf("%d", &op1);
	printf("Introduzca el segundo operando mayor o igual a cero: ");
	scanf("%d", &op2);
	printf("Resultado de la division: %g",dividir(op1,op2));
	break;
	case 5:
	break;
	}
}
}
