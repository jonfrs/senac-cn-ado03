#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define GNUPLOT "gnuplot -persist"
#include "lib.h"

void Euler(){

    long double i=1, fator;
    float eulerft=0.0, t_eulerft=0.0;//, temp=1.123456789012345678901234567890;
    double eulerd=0.0, t_eulerd=0.0;
    long double eulerld=0.0, t_eulerld=0.0; 
	
    FILE *f_float, *gate1, *f_double, * f_ldouble, *gate2, *gate3;
	
    f_float=fopen("euler_ft.txt", "wb");
    f_double=fopen("euler_d.txt", "wb");
    f_ldouble=fopen("euler_ld.txt", "wb");

	gate1=popen(GNUPLOT,"w");
    gate2=popen(GNUPLOT,"w");
    gate3=popen(GNUPLOT,"w");
    //printf("teste %.30g", temp);

    //Euler float
       for(i=0; i<20000;i+=0.01){
        fator = pow(10,i/1000);
        //printf("i antes do else: %Lf\n",i);
        //printf("expoente:%d\t",expoent);
        t_eulerft = (1.000000000000000000000000000000/fator);
        
        //printf("eulerft %.50f + 1/%.50Lg\n", eulerft, fator);
        t_eulerft = t_eulerft + 1.000000000000000000000000000000;
        eulerft = pow(t_eulerft,fator);
        
        fprintf(f_float,"%.20Lf\t %.50g\n",fator, eulerft);
        //printf("%Lf\t",i);
    }
    fprintf(gate1, "set terminal png size 720,480\n");
    fprintf(gate1, "set logscale x 10\n");
    //fprintf(gate1, "set logscale y 2\n");
    fprintf(gate1, "set title'Euler float'\n");
    fprintf(gate1, "set xlabel'Iterações'\n");
    fprintf(gate1, "set ylabel'Valor de e'\n");
    fprintf(gate1, "set output'euler_ftl.png'\n");
    fprintf(gate1, "plot'euler_ft.txt' title'Erros assutadores' with lines\n");
    fclose(f_float);
    pclose(gate1);

    //Euler double
    printf("i: %Lf ",i);
  /*
    for(i=0; i<N;i=i){
        //printf("double\n");
        if(i<100)
            i++;
        else{
            expoent++;
            //printf("expoente:%d\t",expoent);
            i=pow(10,expoent);
            //printf("i no else %.0Lf\n",i);
        }
        fator = fatorial(i);
        t_eulerd = (1/fator);
        //printf("eulerft %.50f + 1/%.50Lg\n", eulerft, fator);
        eulerd += t_eulerd;
        
        
        fprintf(f_double,"%.0Lf\t %.50g\n",i, eulerd);
        //printf("%Lf\t",i);
    }
 */
       for(i=0; i<20000;i+=0.01){
        fator = pow(10,i/1000);
        //printf("i antes do else: %Lf\n",i);
        //printf("expoente:%d\t",expoent);
        t_eulerd = (1.000000000000000000000000000000/fator);
        
        //printf("eulerft %.50f + 1/%.50Lg\n", eulerft, fator);
        t_eulerd = t_eulerd + 1.000000000000000000000000000000;
        eulerd = pow(t_eulerd,fator);
        
        fprintf(f_double,"%.20Lf\t %.50g\n",fator, eulerd);
        //printf("%Lf\t",i);
    }    
    fprintf(gate2, "set terminal png size 720,480\n");
    fprintf(gate2, "set logscale x 10\n");
    fprintf(gate2, "set title'Euler double'\n");
    fprintf(gate2, "set xlabel'eixo X'\n");
    fprintf(gate2, "set output'euler_dbl.png'\n");
    fprintf(gate2, "plot'euler_d.txt' title'Gráfico Erros assutadores' with lines\n");
    fclose(f_double);
    pclose(gate2);


    //Euler long double
/*    for(i=0; i<N;i=i){
        //printf("long double\n");
        if(i<100)
            i++;
        else{
            expoent++;
            //printf("expoente:%d\t",expoent);
            i=pow(10,expoent);
            //printf("i no else %.0Lf\n",i);
        }
        fator = fatorial(i);
        t_eulerld = (1/fator);
        //printf("eulerft %.50f + 1/%.50Lg\n", eulerft, fator);
        eulerld += t_eulerld;
        
        
        fprintf(f_ldouble,"%.0Lf\t %.50Lg\n",i, eulerld);
        //printf("%Lf\t",i);
    }
 */
        for(i=0; i<20000;i+=0.01){
        fator = pow(10,i/1000);
        //printf("i antes do else: %Lf\n",i);
        //printf("expoente:%d\t",expoent);
        t_eulerld = (1.000000000000000000000000000000/fator);
        
        //printf("eulerft %.50f + 1/%.50Lg\n", eulerft, fator);
        t_eulerld = t_eulerld + 1.000000000000000000000000000000;
        eulerld = pow(t_eulerld,fator);
        
        fprintf(f_ldouble,"%.20Lf\t %.50Lf\n",fator, eulerld);
        //printf("%Lf\t",i);
    }
    fprintf(gate3, "set terminal png size 720,480\n");
    fprintf(gate3, "set logscale x 10\n");
    fprintf(gate3, "set title'Euler long double'\n");
    fprintf(gate3, "set xlabel'eixo X'\n");
    fprintf(gate3, "set output'euler_ldbl.png'\n");
    fprintf(gate3, "plot'euler_ld.txt' title'Gráfico Erros assutadores' with lines\n");
    fclose(f_ldouble);
    pclose(gate3);

}

/*
long double fatorial(long double val){
	//printf("chegou\t");
    if (val <= 1)
        return 1;
    else  
	    val*=fatorial(val-1);
    printf("fatorial= %.4Lf", val);
	return val;
}
long double fatorial(long double val){
    long double i;
    long double result=1;
 
    for(i=0;i<val;i++) 
    result*=(val-i);
 
    return result;
}
*/