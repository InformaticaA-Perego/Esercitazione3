int main(int argc, const char * argv[]) {
    int anno;
    
    printf("Inserici l'anno da controllare: ");
    scanf("%d",&anno);
    
    if ((anno%400 == 0) || ((anno%4 == 0) && (anno%100 != 0)) )
        printf("L'anno %d è bisestile\n", anno);
    else
        printf("L'anno %d non è bisestile\n", anno);
    return 0;
}
