// Swap Two Numbers using temporary Variable

#include <stdio.h>

int main()
{
    int x, y, temp = 0;
    printf("Enter the first number=");
    scanf("%d", &x);
    printf("Enter the first number=");
    scanf("%d", &y);
    printf("Befor swapping x=%d\n", x);
    printf("Befor swapping y=%d\n", y);

    temp = x;
    x = y;
    y = temp;

    printf("After swapping x=%d\n", x);
    printf("After swapping y=%d", y);

    return 0;
}