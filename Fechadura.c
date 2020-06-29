#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define tam 1000
int main() {
    int a, b, i, v[tam], soma;
    scanf("%d%d", &a, &b);
    for(i=0;i<a;i++){
        scanf("%d", &v[i]);
    }
    for(i=0;i<a;i++){
        if(v[i]==b){v[i]=0;}
        else if(v[i]>b){v[i]=v[i]-b;v[i+1]=v[i+1]-v[i];}
        else if(v[i]<b){v[i]=b-v[i];v[i+1]=v[i+1]+v[i];}
    }
    for(i=0;i<a;i++){
        soma=soma+v[i];
    }
    printf("%d", soma);
	return 0;
}