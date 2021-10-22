#include <stdio.h>
#include <math.h>

// S = radice quadrata(p*(p-l1)*(p-l2)*(p-l3))
//l1, l2, l3 = lati
//p = semiperimetro

//Calcolare la radice quadrata intera di un numero

int main(int argc, const char * argv[]) {
    float l1,l2,l3;
    float p, S;
    
    scanf("%f",&l1);
    scanf("%f",&l2);
    scanf("%f",&l3);
    
    if ((l1 >=0) &&
        (l2 >=0) &&
        (l3 >=0)){
        if ((l1+l2>=l3) &&
            (l2+l3>=l1) &&
            (l1+l3>=l2)){
            
            if ((l1+l2==l3) || (l2+l3==l1) || (l1+l3==l2)){
                printf("Il triangolo è degenere, area = 0\n");
            }
            else{
                //è un triangolo!!!
                p = (l1+l2+l3)/2;
                S = sqrt(p*(p-l1)*(p-l2)*(p-l3));
                
                printf("L'area vale: %.2f\n",S);
            }
        }
        else{
            printf("Il triangolo non esiste\n");
        }
    }
    else
        printf("Hai inserito dei lati <0\n");
    
    return 0;
}
