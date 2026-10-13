#include <stdio.h>

int main(){
    char s1[6];
    printf("enter the name ");
    scanf("%s", &s1);
    printf("\n%s\n",s1);
    printf("[%10s]\n", s1);
    printf("[%-10s]\n",s1);
    printf("%.3s\n",s1);
    fgets(s1,sizeof(s1),stdin);
    printf("Name%10s",s1);

    return 0;
}