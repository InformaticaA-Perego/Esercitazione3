int main(int argc, const char * argv[]) {
    char c;
    int contVocali = 0;
    int contCaratteriStrani = 0;
    
    printf("Inserisci 5 lettere seguiti dall'invio: ");
    //fflush(stdin); //WIN
    //fpurge(stdin); //MAC
    scanf(" %c",&c);
    
    if ((c<'A') || ((c>'Z') && (c<'a')) || (c>'z'))
        contCaratteriStrani++;
    
    if ((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u')
     || (c=='A') || (c=='E') || (c=='I') || (c=='O') || (c=='U'))
        contVocali++; //contVocali = contVocali+1;
    
    scanf(" %c",&c);
    if ((c<'A') || ((c>'Z') && (c<'a')) || (c>'z'))
        contCaratteriStrani++;
    if ((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u')
     || (c=='A') || (c=='E') || (c=='I') || (c=='O') || (c=='U'))
        contVocali++; //contVocali = contVocali+1;
    
    scanf(" %c",&c);
    if ((c<'A') || ((c>'Z') && (c<'a')) || (c>'z'))
        contCaratteriStrani++;
    if ((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u')
     || (c=='A') || (c=='E') || (c=='I') || (c=='O') || (c=='U'))
        contVocali++; //contVocali = contVocali+1;
    
    scanf(" %c",&c);
    if ((c<'A') || ((c>'Z') && (c<'a')) || (c>'z'))
        contCaratteriStrani++;
    if ((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u')
     || (c=='A') || (c=='E') || (c=='I') || (c=='O') || (c=='U'))
        contVocali++; //contVocali = contVocali+1;
    
    scanf(" %c",&c);
    if ((c<'A') || ((c>'Z') && (c<'a')) || (c>'z'))
        contCaratteriStrani++;
    if ((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u')
     || (c=='A') || (c=='E') || (c=='I') || (c=='O') || (c=='U'))
        contVocali++; //contVocali = contVocali+1;
    
    printf("Il numero di vocali inserite è: %d\n",contVocali);
    printf("I caratteri strani sono: %d\n", contCaratteriStrani);
    return 0;
}
