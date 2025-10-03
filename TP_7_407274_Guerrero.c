#include <stdio.h>
#define TAM 2

int carga_y_validacion_cod_barra(int arr[], int tam);
float carga_y_validacion_precio(float arr[], int tam);
void mayor_precio (float arr[], int cod_b[], int tam);
void menor_precio (float arr[], int cod_b[], int tam);

int main(int argc, char *argv[]) {
	
	int cod_barras[TAM]={0};
	float precio [TAM]={0};
	
	for(int i=0; i<TAM; i++){
		do{
			printf("\nIngrese el código de barra del producto %d:",i);
			scanf("%d", &cod_barras[i]);	
			if(cod_barras[i]<0 || cod_barras[i]>99999999){
				printf("\nError, ingrese nuevamente el código de barra del producto %d:", i);
				scanf("%d", &cod_barras[i]);
			}
		}while(cod_barras[i]<0 || cod_barras[i]>99999999);
	}
	
	for(int i=0; i<TAM;i++){
		do{
			printf("\nIngrese el precio del producto %d: ", i);
			scanf("%f", &precio[i]);
			if(precio[i]<0){
				printf("\nError, ingrese nuevamente el precio del producto %d:", i);
				scanf("%f", &precio[i]);
			}
		}while(precio[i]<0);
	}
	
	printf("\nCodigo de barras\tPrecio");
	
	for(int i=0; i<TAM;i++){
		printf("\n%d\t\t\t%.2f", cod_barras[i], precio[i]);
	}
	
	mayor_precio(precio,cod_barras, TAM);
	menor_precio(precio,cod_barras,TAM);
	
	return 0;
}

void mayor_precio (float precio[], int cod_b[], int tam){
	
	float mas_caro=0;
	int cod_mas_caro=0;
	
	for(int i=0; i<tam;i++){
		if(precio[i]>mas_caro){
			mas_caro=precio[i];
			cod_mas_caro= cod_b[i];
		}
	}
	
	printf("\nEl producto más caro es: [%d] %.2f", cod_mas_caro,mas_caro);
}
void menor_precio (float precio[], int cod_b[], int tam){
	
	float mas_barato=100000;
	int cod_mas_barato=0;
	
	for(int i=0; i<tam;i++){
		if(precio[i]<mas_barato){
			mas_barato=precio[i];
			cod_mas_barato= cod_b[i];
		}
	}
	
	printf("\nEl producto más barato es: [%d] %.2f", cod_mas_barato,mas_barato);	
}
