//Practica 4.2
//Andres Torruco Bustillos
//A00960015

#include <stdio.h>

int main() {
int x, result=0, i=0, j;
printf("x: ");
scanf("%d", &x);   
j = x;                                                                
while(j > 0)                                                            
	{
	    if(j & 1)                                                           
	    {                                                                       
	        result += x << i;
	    }
	    j = j >> 1;                                                                       
	    i++;                                                                           
	}                                                                        
	printf("%d^2= %d\n", x, result );
}
