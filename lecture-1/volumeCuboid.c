#include <stdio.h>
int main()
{
    // Accept Length
    printf("Enter Length: ");
    int l;
    scanf("%d", &l);

    // Accept Breadth
    printf("Enter Breadth: ");
    int b;
    scanf("%d", &b);
    printf("Enter Hieght: ");

    // Accept Height
    int h;
    scanf("%d", &h);

    // find and display Volume
    int volume = l * b * h;
    printf("Volume: %d", volume);
    printf("\n");

    return 0;
}