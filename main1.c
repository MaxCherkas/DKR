#include <stdio.h>
#include <stdlib.h>

int factorial(int N);
double power(int x, int N);

int main()
{
    int N, res = 0;
    double suma = 0;
    do{
            printf("Enter N >= 0:");
            scanf("%d", &N);
    } while(N<0);

    for(int n=0; n <= N; n++){
            suma += power(2, n) / factorial(n);
    }
    res = 1 + suma;
    printf("\n Resultat= %d", res);

    return 0;
}
//************************************************
int factorial(int N){
    int value = 1;

    for(int i = 2; i <= N; i++){
        value *= i;
    }
    return value;
}
//************************************************
double power(int x, int N){
    double value = 1;

    if(N==0){
        return 1;
    }
    else if(N==1){
        return x;
    }
    for(int i = 0; i < N; i++){
        value *= x;
    }
    return value;
}
