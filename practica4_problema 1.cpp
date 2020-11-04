//Encuentra el único elememto de un arreglo
#include <stdio.h> 
  
int getSingle(int arr[], int n) 
{ 
    int ones = 0, twos = 0; 
    int common_bit_mask; 
    for (int i = 0; i < n; i++) { 
        twos = twos | (ones & arr[i]); 
        ones = ones ^ arr[i]; 
        printf("Iteracion: %d \n", i);
        printf ("ones: %d twos: %d iniciales \n", ones, twos); 
        common_bit_mask = ~(ones & twos); 
        ones &= common_bit_mask; 
        twos &= common_bit_mask; 
        printf ("ones: %d twos: %d finales \n", ones, twos); 
    } 
    return ones; 
} 
  
int main() 
{ 
    int arr[] = { 10, 1, 10, 3, 10, 1, 1, 2, 3, 3 }; 
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\nEl elemento con multiplicidad unitaria es: %d ", 
           getSingle(arr, n)); 
    return 0; 
} 
