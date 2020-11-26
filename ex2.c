#include <stdio.h>
void main()
{
    char a[128];
    char b[128];
    int i,w,k,x = 0;
    scanf("%127s", a);
    scanf("%127s", b);
    while (a[k] != 0) {
        k++;
    }
    while (b[x] != 0) {
        x++;
    }
    if (k>x){
        k=k;
    }
    else{
        x=k+x;
        k=x-k;
    }
    for(i=0;i<(k+1);i++){
        if (a[i]==b[i]){
            w++;
        }
        else{
            break;
        }
    }
    if (w==k){
        printf("yes");
    }
    else{
        printf("no,%d",w);
    }
}
