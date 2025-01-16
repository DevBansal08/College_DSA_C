#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 4, 5};
    int num = 3;
    int position = 2;
    for (int i = 4; i >= position; i--)
    {
        a[i] = a[i - 1];
    }
    a[position] = num;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}