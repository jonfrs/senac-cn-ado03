#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern FILE *popen( const char *command, const char *modes);
extern int pclose(FILE *stream); 
void Euler();
//long double fatorial(long double val);