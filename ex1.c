#include <stdio.h>
void main()
{
    char a[128];
    int i = 0;
 
    scanf("%127s", a);
 
    while (a[i] != 0) {
        i++;
    }
 
    printf("%d",i);
}
