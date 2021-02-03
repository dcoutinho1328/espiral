#include <stdio.h>
#include <stdlib.h>

int ordenadas(int raiz, int p){

    int y,erro;
    erro=p-(raiz*raiz);
    if(raiz%2==0){
        y=-(raiz/2);
        if(erro>raiz){
            y=y+(erro-raiz);
        }
    }
    else{
        y=(raiz+1)/2;
        if(erro>raiz){
            y=y-(erro-raiz);
        }
    }
      return y;
}

int abscissas(int raiz, int p){

    int x,erro;
    erro=p-(raiz*raiz);
    if(raiz%2==0){
        x=-(raiz/2);
        if(erro>=raiz){
            x=x+raiz;
        }
        else{
            x=x+erro;
        }
    }
    else {
        x=(raiz-1)/2;
        if(erro>=raiz){
            x=x-raiz;
        }
        else{
            x=x-erro;
        }
    }
    return x;
}

int main()
{
    int x,y,p,raiz;
    scanf("%d", &p);
    raiz=sqrt(p);
    x=abscissas(raiz,p);
    y=ordenadas(raiz,p);
    printf("(%d,%d)", x,y);

    return 0;
}
