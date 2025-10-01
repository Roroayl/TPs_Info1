#include <stdio.h>

int main(int argc, char *argv[]) {
	float peso=0, altura=0, ibm=0;
	do{
		printf("Ingrese el peso en Kg: ");
		scanf("%f", &peso);
		if(peso<0){
			printf("\nIngrese nuevamente su peso en Kg:");
			scanf("%f", &peso);
		}
		
		printf("\nIngrese la altura en metros: ");
		scanf("%f", &altura);
		if(altura<0){
			printf("\nIngrese nuevamente su altura en metros: ");
			scanf("%f", &altura);
		}
		
	}while(altura<0 || peso<0);
	
	ibm= peso / (altura*altura);
	
	printf("\nSu índice de masa corporal es: %.2f", ibm);
	
	printf("\nÍndice| Condición\n <18.5|Bajo peso\n 18.5 a 24.9| Normal\n 25.0 a 29.9| Sobrepeso\n >=30| Obesidad");

	if(ibm<18.05){
		printf("\nUsted se encuentra en Bajo peso");
	}
	else if(ibm>=18.05 && ibm<24.9){
		printf("\nUsted se encuentra en Normal");
	}
	else if(ibm>=25 && ibm<29.9){
		printf("\nUsted se encuentra en Sobrepeso");
	}
	else{
		printf("\nUsted se encuentra en Obesidad");
	}
	
	return 0;
}

