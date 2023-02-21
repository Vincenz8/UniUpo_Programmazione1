// Russotto Vincenzo matricola 20052037
#include <stdio.h>
#include <stdlib.h>

#define DIM 10

int carica_vettore(int vett[], int x, FILE *f);
void visualizza_vettore(int vett_tappo[]);
void conta_pari_dispari(int vett_tappo[], int* q1, int* q2);
void aggiungi_valore(int *vett_tappo, int x);

int main(int argc, char **argv)
{
  if (argc == 2)
  {
    FILE *f;

    f = fopen(argv[1], "r");

    if(f != NULL)
    {
      int numeri[DIM];
      int n_elementi;
      int n;
      int q1, q2;

      q1 = 0;
      q2 = 0;


      printf("Inserisci valore: ");
      scanf("%d", &n);

      n_elementi = carica_vettore(numeri, n, f);
      fclose(f);
      visualizza_vettore(numeri);

      conta_pari_dispari(numeri, &q1, &q2);
      printf("\n\nNumeri pari: %d\tNumeri dispari: %d\n\n", q2, q1);

      if(n_elementi < DIM - 1)
      {
        printf("Inserisci valore da aggiungere: ");
        scanf("%d", &n);

        aggiungi_valore(numeri, n);

        visualizza_vettore(numeri);
      }
      else
      {
        printf("Errore: vettore pieno");
        return 3;
      }
    }
    else
    {
      printf("Errore: impossibile aprire il file!\n");
      return 2;
    }

  }
  else
  {
    printf("Errore: nessun argomento da linea di comando!\n");
    return 1;									
  }
  return 0;
}

/*carica_vettore: inizializza un vettore tappo con numeri positivi e divisori di x presenti nel file, restituisce numero di posizioni occupate*/
int carica_vettore(int vett[], int x, FILE *f)
{
  int n_file;
  // int n_valido;
  int i = 0;

  // se l'ultimo valore nel file e' un divisore, viene inserito due volte nel vettore. 
  // se l'ultimo valore nel file non e' un divisore, viene inserito uno 0 nel vettore.
  // se il file non contiene divisori, il vettore contiene un valore.
  // il doppio ciclo (for+while) incrementa una volta di troppo la i.			  

  // for (i = 0;!feof(f) && i < (DIM - 1); i++)   // NO				(-1)
  // {
  //   n_valido = 0; // assumo non valido
    
  //   while (!n_valido && !feof(f)) // while (!feof && i<DIM-1)			(-1)
  //   {
  //     fscanf(f, "%d", &n_file); 

  //     if ((n_file > 0) && ((x % n_file) == 0))
  //     {
  //       vett[i] = n_file; 
  //       n_valido = 1; // i++;							(-1)
  //     }
  //   }
  // } 3 2 -1 7 50 14 25 19 8 -10 5 4
 
  while((fscanf(f, "%d", &n_file) != EOF) && (i < (DIM - 1)))
  {
    if(n_file >= 0 && ((x % n_file) == 0))
    {
      *(vett++) = n_file;
      i++;
    }
  }
  *(vett) = -1;

  return i;
}

/*visualizza_vettore: visualizza a schermo un vettore_tappo di interi*/
void visualizza_vettore(int vett_tappo[])
{
  if (vett_tappo[0] != -1)
  {
    printf("Indici\tValori\n\n");

    for (int i = 0; vett_tappo[i] != -1; i++)
    {
      printf("%d     \t%d\n", i, vett_tappo[i]);
    }
  }
  else
  {
    printf("Errore: vettore vuoto!");
  }
}

/*conta_pari_dispari: conta il numeri pari e dispari e assegna le quantita' ai parametri q1 e q1*/
void conta_pari_dispari(int vett_tappo[], int* q1, int* q2)
{
  for (int i = 0; vett_tappo[i] != -1; i++)
  {
    if ((vett_tappo[i] % 2) == 0)
    {
      (*q2)++;
    }
    else
    {
      (*q1)++;
    }
  }
}

/*aggiungi_valore: aggiunge il valore nella seconda posizione del vettore con x*/
void aggiungi_valore(int *vett_tappo, int x)
{
  // nella condizione di ciclo si confronta il valore in posizione i con DIM;		  (-2)
  // forse si intendeva confrontare l'indice i con DIM, cioe' i<DIM;
  // per fare lo shift a destra bisogna visitare il vettore da destra verso sinistra.	  (-1)
  // for (int i = 2; (*(vett_tappo + i)) < DIM; i++)
  // {
  //   if (*(vett_tappo + i) == -1)
  //   {
  //     *(vett_tappo + i) = *(vett_tappo + i - 1);
  //     *(vett_tappo + i + 1) = -1;
  //     break;
  //   }
  //   else
  //   {
  //     // in questo modo si perde il valore originale in posizione i			(-2)
  //     *(vett_tappo + i) = *(vett_tappo + i - 1); 
  //   }
  // }
  // *(vett_tappo + 1) = x;
  int len_vett;
  
  len_vett = 0;

  for (int i = 0; *(vett_tappo + i) != -1; i++)
  {
    len_vett++;
  }

  *(vett_tappo + len_vett + 1) = -1;

  for (int i = len_vett; i > 1; i--)
  {
    *(vett_tappo + i) = *(vett_tappo + i - 1);
  }

  *(vett_tappo + 1) = x;
}
