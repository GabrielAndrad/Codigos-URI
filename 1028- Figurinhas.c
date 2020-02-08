#include <stdio.h>

int mdc(int x, int y){
    int aux = 0;
    while(y%x != 0){
        aux = x;
        x = y%x;
        y = aux;
    }
return x;
}

int main(){
    
    int n, x, y, aux,i;
    
    scanf("%d",&n);
    
    for(i = 0; i < n; i++){
        scanf("%d",&x);
        scanf("%d",&y);    
            
        if(x > y){
            aux = x;
            x = y;
            y = aux;
        }
            
    printf("%d\n", mdc(x,y));
    }
    
    return 0;
} 