#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    char cmd;
    
    int ris1, ris2;
    
    printf("Inserisci tre numeri.\n1. ");
    scanf(" %d",&a);
    printf("2. ");
    scanf(" %d",&b);

    
    printf("Inserisci l'operazione da eseguire\n");
    printf("s) somma\n");
    printf("p) somma e prodotto\n");
    printf("m) minimo\n");
    printf("M) massimo\n");
    printf("t) minimo e massimo\n> ");
    
    scanf(" %c",&cmd);
    
    switch (cmd) {
        case 'p':
            ris2 = a*b;
            printf("il prodotto vale vale: %d\n",res2);
            //somma e prodotto
        case 's':
            ris1 = a+b;
            printf("la somma vale: %d\n",ris1);
            break;
        case 'm':
            if (a>b)
                printf("il minimo è %d\n",b);
            else
                printf("il minimo è %d\n",a);
            //minimo
            break;
        case 'M':
            if (a>b)
                printf("il massimo è %d\n",a);
            else
                printf("il massimo è %d\n",b);
            //Massimo
            break;
        case 't':
            if (a>b){
                printf("il minimo è %d\n",b);
                printf("il massimo è %d\n",a);
            }
            else{
                printf("il minimo è %d\n",a);
                printf("il massimo è %d\n",b);
            }
            //minimo e massimo
            break;
        default:
            printf("Operazione non valida\n");
            break;
    }
    
    return 0;
}
