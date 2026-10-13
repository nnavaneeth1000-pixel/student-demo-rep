#include <stdio.h>
int roll;
float s1, s2, s3, s4, s5, total, avg, cgpa;
void studentdata()
{
    printf("enter roll no\n");
    scanf("%d", &roll);
}
void gy()
{

    printf("enter marks\n");
    printf("mr of sub1\n");
    scanf("%f", &s1);
    printf("mr of sub2\n");
    scanf("%f", &s2);
    printf("mr of sub3\n");
    scanf("%f", &s3);
    printf("mr of sub4\n");
    scanf("%f", &s4);
    printf("mr of sub5\n");
    scanf("%f", &s5);
    total = s1 + s2 + s3 + s4 + s5;
}
void avgg()
{
    avg = total / 2;
}
void cgpaa()
{
    cgpa = total / 9.5;
}
void stuout()
{
    printf("roll no:%d\n", roll);
    printf("total mark %f\n", total);
    printf("avg mark %f\n", avg);
    printf("cgpa is: %f\n", cgpa);
}
int main()
{
    studentdata();
    gy();
    avgg();
    cgpaa();
    stuout();
    return 0;
}