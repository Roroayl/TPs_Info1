#include <stdio.h>

int main(int argc, char *argv[]) {
	float peso=0, altura=0, ibm=0;
	do{
	printf("Ingrese el peso en Kg: ");
	scanf("%f", &peso);
	printf("\nIngrese la altura en metros: ");
	scanf("%f", &altura);
	}while(peso<0 || altura<0);
	
	ibm= peso / (altura*altura);
	
	printf("\nSu índice de masa corporal es: %.2f", ibm);
	
	printf("\nÍndice| Condición\n <18.5|Bajo peso\n 18.5 a 24.9| Normal\n 25.0 a 29.9| Sobrepeso\n >=30| Obesidad");

	if(ibm<18.05){
		printf("Usted se encuentra en Bajo peso");
	}
	if else(ibm>=18.05 && ibm<24.9){
		printf("Usted se encuentra en Normal");
	}
	if else(ibm>=25 && ibm<29.9){
		printf("Usted se encuentra en Sobrepeso");
	}
	else{
		printf("Usted se encuentra en Obesidad");
	}
	
	return 0;
}

