#include <stdio.h>
#include <math.h>
void main() {
    #define x 15
    int i;
    float a,w,k,g,h;
    scanf("%f",&a);
    g=a;
    h=1/a;
    for (i=1;i<x;i++){
        scanf("%f",&w);
        a=w+a;
        g=g*w;
        h=h+(1/w);
    }
    a=a/x;
    g=pow(g, 1/x);
    h=x/h;
    printf("%f,%f,%f",a,g,h);
}
