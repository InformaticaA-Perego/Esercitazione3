//Dati tre numeri a,b,c calcolare il delta e le eventuali radici dell'equazione di secondo grado.
int main1(int argc, const char * argv[]) {
    int a,b,c;
    int delta;
    float val, val2;
    
    printf("%f",val1);
    printf("Inserisci i tre valori del polinomio di secondo grando:\n");
    printf("Inserisi a: ");
    scanf("%d", &a);

    if (a==0){
        printf("L'equazione non è di secondo grado.\n");
        return 1;
    }
    else{
        //Qui ci arrivo solo se a!=0
        printf("Inserisi b: ");
        scanf("%d", &b);
        printf("Inserisi c: ");
        scanf("%d", &c);
        
        //delta = b*b-4*a*c;
        delta = pow(b,2)-4*a*c;
        printf("delta vale: %d\n",delta);
        if (delta==0){
            //Ho una soluzione reali
            val1 = -b/(2*(float)a);
            val2 = val1;
            printf("La soluzione è: %.2f\n", val1);
        }
        else if (delta>0){
            //Ho due soluzioni reali distinte
            val1 = (-b+sqrt(delta))/(2*a);
            val2 = (-b-sqrt(delta))/(2*a);
            printf("Le due soluzioni reali sono: %.2f %.2f\n", val1, val2);
        }
        else{
            //Non ho soluzioni reali
            printf("Non esistono soluzioni reali\n");
        }
    }
    
    return 0;
}
