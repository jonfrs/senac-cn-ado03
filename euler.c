#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "lib.h"
int main(){
    /*
    long double N;/, total;
    //printf("argc %d\n", argc);
    if(argc<=1){
        N = 100000000000000000000.0;
        printf("o gráfico sera gerado com 10^20 iteracoes.\n");
    }
    else{
        //printf("cansei"); 
        N = atoi(argv[1]);
        total = strlen(argv[1]);
        printf("%f\n",total);
        if (total > ULLONG_MAX){
            printf("Número maximo de iteracoes exedido\n");
            exit(1);
           }
    }
    */
	Euler();
    //remove("euler_ft.txt");
	return 0;
}