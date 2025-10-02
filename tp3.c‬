#include <stdio.h>
#include <math.h>

float calcularAreaRectangulo (float longi, float alt);
float calcularPerimetroRectangulo(float longi, float alt);
float calcularDiagonalRectangulo (float longi, float alt);
float calcularAreaCirculo (float r);
float calcularPerimetroCirculo(float r);

int main(int argc, char *argv[]) {
	float longi=0, alt=0, radio=0, area=0, perimetro=0, diag=0;
	int op=0;
	do{
	printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo):");
	scanf("%d", &op);
	}while(op<0 || op>2);
	
	if(op==1){
		printf("\nOpci�n de rectangulo seleccionada");
	}
	else{
		printf("\nOpci�n de c�rculo seleccionada");
	}
	
	switch (op){
	case 1:
		
		printf("\nIngrese la longitud del rectangulo:");
		scanf("%f", &longi);
		printf("\nIngrese la altura del rectangulo:");
		scanf("%f", &alt);
		
		area=calcularAreaRectangulo(longi, alt);
		perimetro=calcularPerimetroRectangulo (longi, alt);
		diag=calcularDiagonalRectangulo(longi, alt);
		
		printf("\nEl �rea del rect�ngulo es: %.2f", area);
		printf("\nEl Perimetro del rect�ngulo es: %.2f", perimetro);
		printf("\nLa diagonal del rect�ngulo es: %.2f", diag);
		
		break;
	case 2:
		
		printf("\nIngrese el radio del circulo:");
		scanf("%f", &radio);
		
		area=calcularAreaCirculo(radio);
		perimetro=calcularPerimetroCirculo(radio);
		
		printf("\nEl �rea del c�rculo es: %.2f", area);
		printf("\nEl Per�metro del c�rculo es: %.2f", perimetro);
		
		break;
}
	return 0;
}

float calcularAreaRectangulo(float longi, float alt){
	float area=0;
	area= longi*alt ;
	return area;
}
float calcularPerimetroRectangulo(float longi, float alt){
	float perimetro=0;
	perimetro= (2*longi) + (2*alt);
	return perimetro;
}
float calcularDiagonalRectangulo (float longi, float alt){
	float diagonal=0;
	diagonal=sqrt((longi*longi)+(alt*alt));
	return diagonal;
}
float calcularAreaCirculo (float r){
	float area=0;
	area=3.14*(r*r);
	return area;
}
float calcularPerimetroCirculo(float r){
	float perimetro=0;
	perimetro=2*3.14*r;
	return perimetro;
}
