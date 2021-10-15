#include <stdio.h>

int main(int argc, const char * argv[]) {
    int contVocaliMinuscole = 0;
    int contVocali = 0;
    char c;
    
    scanf(" %c",&c);
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            contVocaliMinuscole++;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            contVocali++;
            break;
        default:
            break;
    }
    
    scanf(" %c",&c);
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            contVocaliMinuscole++;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            contVocali++;
            break;
        default:
            break;
    }

    scanf(" %c",&c);
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            contVocaliMinuscole++;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            contVocali++;
            break;
        default:
            break;
    }

    scanf(" %c",&c);
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            contVocaliMinuscole++;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            contVocali++;
            break;
        default:
            break;
    }

    scanf(" %c",&c);
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            contVocaliMinuscole++;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            contVocali++;
            break;
        default:
            break;
    }

    printf("Vocali minuscole: %d, Vocali: %d\n",contVocaliMinuscole, contVocali);
    return 0;
}
