#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_TESTO "./files/es1_file.txt"

void scrivi_file(char str[], int len_str, char nome_file[]);

int main()
{
    char str[] = "metariga";
    int len_str = strlen(str);

    scrivi_file(str, len_str, FILE_TESTO);

    exit(EXIT_SUCCESS);
}

/*scrivi_file: inserisce meta stringa sul file passato come parametro*/
void scrivi_file(char str[], int len_str, char nome_file[])
{
    FILE *f = fopen(nome_file, "w");

    if (f)
    {
        for (int i = 0; i < (len_str / 2); i++)
        {
            fprintf(f, "%c", str[i]);
        }  

        fclose(f);       
    }
}