#include <stdio.h>
void swap(int *a, int *b, int *c) 
{
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}
int main() 
{
    int a, b, c;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter value for c: ");
    scanf("%d", &c);
    printf("\nOriginal values:a=%d,b=%d,c=%d\n",a,b,c);
    swap(&a,&b,&c);
    printf("\nSwapped values: a=%d,b=%d,c=%d\n",a,b,c);
    return 0;
}

