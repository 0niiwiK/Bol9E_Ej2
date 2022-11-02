#include <stdio.h>

int pideNumero();
int pideN();
int sonCoincidentes(int a, int b, int n);
void imprimirResultados(int coincidente,int a,int b,int n);

int main() {
    int a,b,n;
    a=pideNumero();
    b=pideNumero();
    n=pideN();
    imprimirResultados(sonCoincidentes(a,b,n),a,b,n);

    return 0;
}

int pideNumero(){
    int num;
    printf("Introduce un numero entero positivo: ");
    scanf("%d",&num);
    fflush(stdin);
    while (num<1){
        printf("El numero tiene que ser un numero entero positivo\nIntroduce un numero entero positivo: ");
        scanf("%d",&num);
        fflush(stdin);
    }
    return num;
}

int pideN(){
    int num;
    printf("Introduce el numero de cifras (N) para comprobar si son N-coincidentes: ");
    scanf("%d",&num);
    fflush(stdin);
    while (num<1){
        printf("El numero tiene que ser un numero entero positivo\nIntroduce el numero de cifras (N) para comprobar si son N-coincidentes: ");
        scanf("%d",&num);
        fflush(stdin);
    }
    return num;
}

int sonCoincidentes(int a, int b, int n){
    int sumaCifrasA=0, sumaCifrasB=0, num1=a, num2=b, coincidentes=0;
    for (int i = 0; i < n; ++i) {
        sumaCifrasA+=num1%10;
        num1=num1/10;
        sumaCifrasB+=num2%10;
        num2=num2/10;
    }
    if (sumaCifrasA==sumaCifrasB)
        coincidentes=1;
    return coincidentes;
}

void imprimirResultados(int coincidente,int a,int b,int n){
    if (coincidente==1)
        printf("\n%d y %d son %d-coincidentes",a,b,n);
    else
        printf("\n%d y %d NO son %d-coincidentes",a,b,n);
}