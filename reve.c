#include <stdio.h>
#include <conio.h>
void reverse(int arr)
{
    for (int i = 4; i >= 0; i--)
    {
        printf("%d \n", arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    reverse(arr);
    getch();
}