#include <stdio.h>

//BMI = kg/m^2
//BMI <18.5 -> Sottopeso
//BMI 18.5-24.9 -> Normopeso
//BMI 25.0 - 29.9 -> Sovrappeso
//BMI >30.0 -> Obeso

int main(int argc, const char * argv[]) {
    float kg;
    float cm;
    float BMI;
    fpurge(stdin);
    printf("Inserisci l'altezza (in cm oppure m): ");
    scanf("%f",&cm);
    if (cm==0)
    {
        printf("Errore!\n");
        return 1;
    }
    else if (cm<0)
        cm = cm*-1;
    
    if (cm>10)
        cm = cm/100; //converto in metri
    
    printf("Inserisci il peso in kg: ");
    scanf("%f",&kg);
    
    BMI = kg/(cm*cm);
    
    if (BMI<18.5)
        printf("Sottopeso\n");
    else if (BMI<24.9)
        printf("Normopeso\n");
    else if (BMI<29.9)
        printf("Sovrappeso\n");
    else
        printf("Obeso\n");
    
    return 0;
}
