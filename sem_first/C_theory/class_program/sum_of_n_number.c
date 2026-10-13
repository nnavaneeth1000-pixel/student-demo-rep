#include<stdio.h>
int main(){
    int N,num1,sum=0;
    printf("c pmg to get the sum of number from 5 to N\n");
    printf("enter N value:");
    scanf("%d" ,&N);
    if (N<5)
    {
        printf("pls enter N greater than 5");
    }
    else 
    {
        for (int i = 5; i <=N; i++)
        {
            sum=sum+i;
        }
        printf("sum of number 5 to %d is %d",N,sum);
        
        
    }
    

    
    
}
