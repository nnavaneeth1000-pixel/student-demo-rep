#include <stdio.h>
int n;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else{
    return n * factorial(n - 1);}
}
int main()
{
    printf("enter num:");
    scanf("%d", &n);
   factorial(n);
   printf("%d",n);

}