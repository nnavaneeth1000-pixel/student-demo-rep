#include <stdio.h>
int main(){
    int cho,a,b,ans;
    printf("calculater\n");
    printf("enter choice:");
    scanf("%d" , &cho);
    if (cho == 1)
    {
      printf("enter fis num:\n");
      scanf("%d" , &a);
      printf("sec num\n");
      scanf("%d" , &b);
      ans=a+b;
      printf("%d" , ans);

    }
    else if (cho == 2)
    {
        printf("enter fis num:\n");
      scanf("%d" , &a);
      printf("sec num\n");
      scanf("%d" , &b);
      ans=a-b;
      printf ("%d" , ans);
    }
    else if (cho == 3)
    {
        printf("enter fis num:\n");
      scanf("%d" , &a);
      printf("sec num\n");
      scanf("%d" , &b);
      ans=a*b;
      printf("%d" , ans);
    }
    else if (cho ==4)
    {
        printf("enter fis num:\n");
      scanf("%d" , &a);
      printf("sec num\n");
      scanf("%d" , &b);
      ans=a/b;
      printf("%d" , ans);
    }
    else 
    {
        printf("invaild");

    }
    return 0;
    
    
    
}