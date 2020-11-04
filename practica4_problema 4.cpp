//Practica 4.3
//Andres Torruco
//A00960015
//Generador de secuencias de Grey Code

#include <stdio.h>
int dectobin(int x, int n);    
int gray(int n);                 


int main(){
	int n;
	printf("Numero a graycode: \n");
	scanf("%d", &n);
    gray(n);
}

int dectobin(int x, int n) 
{ 
    int* binaryNumber = new int(x);                     
    int i = 0; 
    while (x > 0) {  
		                   
        binaryNumber[i] = x % 2;                            
        x = x / 2;                                       
        i++;                                             
    } 
  
    for (int j = 0; j < n - i; j++){                     
        printf("0");
	}
  
    for (int j = i - 1; j >= 0; j--){                    
        printf("%d", binaryNumber[j]);                   
	}
        
} 
  
 
int gray(int n) 
{ 
    int N = 1 << n;                         
    for (int i = 0; i < N; i++) {           
        int x = i ^ (i >> 1);               
        dectobin(x, n);        
        printf("\n");
    } 
} 
