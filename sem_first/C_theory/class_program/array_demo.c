// pgm to store and display 5 subjects mark
#include <stdio.h>
int main()
{
    int total;
    int my_marks[5];
    int sub[5]; // declares an array 'sub'
    // with SIZE 5 of 'int' type
    // storing data/ array initialization - array_name[index]=data/value
    sub[0] = 80; // stores '80' in an array position whose index is '0'
    sub[1] = 40;
    sub[2] = 40;
    sub[3] = 40;
    sub[4] = 40; // static array initialization
    // fetch first array element from 'sub'
    // dynamic initialization of 'my_mark'
    for (int i = 0; i < 5; i++)
    {
        printf("enter mark %d:", 1 + i);
        scanf("%d", &my_marks[i]);
    }
    total = my_marks[0] + my_marks[1] + my_marks[2] + my_marks[3] + my_marks[4];

    printf("sub1 mark : %d\n", sub[0]);
    printf("sub2 mark : %d\n", sub[1]);
    printf("sub3 mark : %d\n", sub[2]);
    printf("sub4 mark : %d\n", sub[3]);
    printf("sub5 mark : %d\n", sub[4]);
    printf("total:%d", total);
    

    return 0;
}