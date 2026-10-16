#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter an alphabet letter: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y': printf("Vowel. Uppercase: %c \n", ch - 32); break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y': printf("Voewl. \n"); break;
        default:
        printf("consonent \n");
    }
}
