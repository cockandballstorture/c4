#include <stdio.h>
void main() {
    int i;
    int a[16];
    for (i=0;i<16;i++){
        scanf("%d",&a[i]);//enter from ascii
        
    }
    for (i=1;i<9;i++){
        a[i+8]=a[8-i];
    }
    for (i=1;i<17;i++){
        printf("%c", a[i]);
}
}
