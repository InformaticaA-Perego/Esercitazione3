#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    printf("Inserisci a: ");
    scanf("%d",&a);
    printf("Inserisci b: ");
    scanf("%d",&b);
    printf("Inserisci c: ");
    scanf("%d",&c);
    
    if (a<b){
        if (b<c)
            printf("%d %d %d\n",a,b,c);
        else{
            if (a<c)
                printf("%d %d %d\n",a,c,b);
            else
                printf("%d %d %d\n",c,a,b);
        }
    }
    else {
        //b<a
        if (b<c){
            if (a<c)
                printf("%d %d %d\n",b,a,c);
            else
                printf("%d %d %d\n",b,c,a);
        }
        else
            printf("%d %d %d\n",c,b,a);
    }
    return 0;
}
