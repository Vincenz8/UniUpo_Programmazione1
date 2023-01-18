#include <stdio.h>
#include <string.h>

#define MAXLEN 50

int main()
{
    char s[MAXLEN];
    int i = 0;

    printf("Inserisci parola: ");
    scanf("%s", s);

    int c_uguali = (s[i] == s[(strlen(s)-1)-i]); //uguaglianza tra primo carattere ed ultimo carattere

    while(c_uguali && i < strlen(s)/2)
    {
        i++;
    }

    if(i == strlen(s)/2)
        printf("%s", s);
    else
        printf("Non e' palindroma");
}