//Practica 4.1 Andres Torruco 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main(){
int x, y, result, resultdiv,xdiv,ydiv,i,j;


printf("Valor de x: ");
scanf("%d", &x);
printf("\nValor de y: ");
scanf("%d", &y);
xdiv=x;
ydiv=y;
result,resultdiv=0;

//Multiplicacion
while(y != 0){
	if(y & 1){
		result= result+x;
	}
	x<<=1;
	y>>=1;
		
}
printf("(x)(y)= %d\n",result);

//Division 
while(xdiv >= ydiv){
	j = ydiv;                       
    i = 1;                     
    while(j <= xdiv){
    j <<= 1;                  
    i <<= 1;
    }
    resultdiv = resultdiv + (i >> 1 );   
    xdiv = xdiv - (j >> 1);                      
    }
    	
printf("x/y= %d\n",resultdiv);
}

