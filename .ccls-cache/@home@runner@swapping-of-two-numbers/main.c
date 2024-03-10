#include<stdio.h>

void swap(int *a, int *b); 

int main() {
    int a, b;
    
    printf("Enter Value for A: ");
    scanf("%d", &a);
    
    printf("Enter Value for B: ");
    scanf("%d", &b);

    printf("\n*** Before Swapping ***\n\n");
    printf("Value of A: %d \n", a);
    printf("Value of B: %d \n", b);
    
    swap(&a, &b); 
    
    printf("\n*** After Swapping ***\n\n");
    printf("Value of A: %d \n", a);
    printf("Value of B: %d \n", b);
    
    return 0;
}

void swap(int *a, int *b) { 
    int temp = *a;
    *a = *b; 
    *b = temp; 
}
