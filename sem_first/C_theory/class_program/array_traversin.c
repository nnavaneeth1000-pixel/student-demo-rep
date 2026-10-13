#include <stdio.h>

int read_array_size()
{
    int size; // local variable
    printf("enter the array size:[<4]");
    scanf("%d", &size);
    return size;
}
int validate_array_size(int arraySize)
{

    if (arraySize > 4)
    {
        return 1;
    }

    return 0;
}
int main()
{
    int isVaild = 1;
    int arraySize;
    while (isVaild == 1)
    {
        int arraySize = read_array_size();
        int vaildated = validate_array_size(arraySize);
        if (vaildated == 1)
        {
            break;
        }
        else
            printf("retry");
    }
}
// reads array  SIZE from keyboard
