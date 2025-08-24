#include <stdio.h>

int main(int argc, char *argv[]) {
	float peso=0, altura=0, ibm=0;
	
	printf("Ingrese el peso en Kg: ");
	scanf("%f", &peso);
	printf("\nIngrese la altura en metros: ");
	scanf("%f", &altura);
	
	ibm= peso / (altura*altura);
	
	printf("\nSu índice de masa corporal es: %.2f", ibm);
	
	printf("\nÍndice| Condición\n <18.5|Bajo peso\n 18.5 a 24.9| Normal\n 25.0 a 29.9| Sobrepeso\n >=30| Obesidad");
	
	return 0;
}

