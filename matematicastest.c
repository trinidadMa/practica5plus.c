#include<stdio.h>
double potencia_1(double base,int exponente);
void sumatoria(int *arreglo_1, int *arreglo_2, int *resultado, int n);
void multiplicacion(int *arreglo_1, int *arreglo_2, int *resultado, int n);

int main(){
int opcion,potencia;
double numero;
int arreglo_1[5] = {1, 2, 3, 4, 5};
int arreglo_2[5] = {5, 4, 3, 2, 1};
int resultado[5];

do{
printf("1] calcular la potencia.\n");
printf("2] sumatoria de dos arreglos.\n");
printf("3] multiplicacion de dos arreglos.\n");
printf("4] salir del programa.\n");
printf("seleccione una opcion del menu\n");
scanf("%d",&opcion);

switch(opcion){
    case 1:
    printf("Ingrese el numero que quiera saber su potencia.\n");
    scanf("%le",&numero);
    printf("Ingresa la potencia.\n");
    scanf("%d",&potencia);
    printf("el numero %2.f ^ %d es %2.f\n",numero,potencia,potencia_1(numero,potencia));
    break;

    case 2:
    sumatoria(arreglo_1,arreglo_2,resultado,5);
    printf("la sumatoria de los arreglos es:\n");
     for (int i=0;i<5;i++) {
        printf("%d-",resultado[i]);
        }printf("\n");
        break;
    
    case 3:
    multiplicacion(arreglo_1,arreglo_2,resultado,5);
    for (int i = 0; i < 5; i++) {
        printf("%d-", resultado[i]);
    }
    printf("\n");
    break;
    
    case 4:
    printf("fin del programa\n");
    break;
    default:
    printf("error, eliga una opcion valida del menu\n");}
    
    
    }while(opcion!=4);

    return 0;}
   
    double potencia_1(double base,int exponente){
    double resultado = 1.0;
    int contador = 0;
    
    while (contador < exponente){
        resultado *= base;
        contador++;
    }
    
    return resultado;}
    
    void sumatoria(int *arreglo_1, int *arreglo_2, int *resultado, int n){
    for (int i = 0; i < n; i++) {
        *(resultado + i) = *(arreglo_1 + i) + *(arreglo_2 + i);}}
        
    void multiplicacion(int *arreglo_1, int *arreglo_2, int *resultado, int n){
        for (int i = 0; i < n; i++) {
        *(resultado + i) = *(arreglo_1 + i) * *(arreglo_2 + i);
    }
}
