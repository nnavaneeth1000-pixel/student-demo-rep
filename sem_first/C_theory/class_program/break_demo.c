#include<stdio.h>
int main(){
    for (int i = 0; i <= 5; i++)
    { 
        printf("loop started");
        for (int j = 0; j <5; j++)
        {
            printf(" inner loop started ");
            printf("\n");
            break;
            printf("from inner loop ");
            printf("\n");
        }
        
        printf("from outer loop");
        printf("\n");
        
        break;
    }
    printf("program terminated..");
}