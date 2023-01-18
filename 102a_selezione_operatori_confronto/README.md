# 1) 
Scrivere un programma che dato un numero intero in input, visualizza se il numero e' pari o dispari(un numero a e' pari se il resto della divisione di a per 2 e' 0).

Usare l'operatore % (modulo) per calcolare il resto della divisione per 2: a%2

# 2) 
Scrivere un programma che dati in input due valori, visualizza il maggiore. 

# 3) 
Realizzare un programma che legga due numeri interi e controlli se il primo e' multiplo del secondo(a e' multiplo di b se il resto della divisione di a per b e' 0).

# 4) 
Si realizzi un programma in linguaggio C che acquisisca da tastiera un numero e stampi il valore assoluto di tale numero (se il numero x inserito e' positivo o nullo, basta visualizzare x. 
Se il numero inserito e' negativo, bisogna visualizzare -x).  

# 5) 
Scrivere un programma che dato un numero intero in input, visualizza se il numero e' nullo, positivo o negativo. 

# 6) 
Scrivere un programma che dati in input tre valori, visualizza il maggiore. 

# 7) 
Scrivere un programma che prenda in input il raggio di una circonferenza. 

Se il raggio e' maggiore di 0, allora il programma calcola e visualizza il valore della circonferenza e dell'area del cerchio. 

Altrimenti visualizza il messaggio "il raggio deve essere maggiore di 0". 



# 8) 
Scrivere un programma che prenda in input due valori e un operatore.

- Se l'operatore e' + allora calcola e visualizza la somma dei valori. 
- Se l'operatore e' - allora calcola e visualizza la differenza dei valori. 
- Se l'operatore e' * allora calcola e visualizza il prodotto dei valori.
- Se l'operatore e' / allora calcola e visualizza la divisione del primo valore per il secondo. 
- Se l'operatore e' diverso dai precedenti, allora visualizza il messaggio "operatore sconosciuto".  



# 9) 
Scrivere un programma che prenda in input il valore di una casa e il codice della zona in cui si trova (1, 2, 3 o 4). 

Il programma deve calcolare la tassa di proprieta' come percentuale del valore della casa.

- In zona 1, la percentuale e' 5%. 
- In zona 2, la percentuale e' 10%.
- In zona 3, la percentuale e' 15%. 
- In zona 4, la percentuale e' 20%.

Il programma deve visualizzare l'importo della tassa se la zona varia tra 1 e 4, altrimenti un messaggio di errore. 

# 10) 
Scrivere un programma che dati in input i coefficienti a, b, c di una equazione di 2° grado, calcola il discriminante:

    Delta=(b*b - 4*a*c).
    
- Se Delta<0 il programma visualizza "nessuna soluzione". 
- Se Delta=0 il programma calcola e visualizza l'unica soluzione dell'equazione x=-b / (2*a)
- Se Delta>0 il programma calcola e visualizza le due soluzioni dell'equazione:

      x1=( -b + sqrt(b*b - 4*a*c) ) / (2*a)
      x2=( -b - sqrt(b*b - 4*a*c) ) / (2*a)

Includere la libreria math.h per poter utilizzare la funzione sqrt (radice quadrata).


# 11) 
Un bancomat soddisfa una richiesta di prelievo di una somma di denaro adottando la seguente strategia:

- Emette  fin che puo' banconote da 50 (ossia, emette banconote da 50 fin tanto che il totale non supera la somma richiesta).

- Quando ha terminato con le banconote da 50, emette fin che puo' banconote da 20.
 
Ad esempio, se la somma richiesta e' 190, verranno emesse
3 banconote da 50 e 2 da 20.

Si noti che non tutte le richieste possono essere soddisfatte.

Ad esempio, se la somma richiesta e' 180, vengono emesse
3 banconote da 50 e una da 20, per un totale di 170 euro.

Scrivere un programma che chiede all'utente di inserire la somma richiesta (un intero), calcola quante banconote da 50 e 20 verranno emesse e il totale corrispondente ai soldi emessi.

I messaggi vanno scritti come negli esempi sotto, in particolare le banconote emesse vanno stampate solo quando il numero e' diverso da 0.

## Esempi di esecuzione
--------------------

somma -->  500
banconote da 50: 10
Somma erogata: 500

somma -->  290
banconote da 50: 5
banconote da 20: 2
Somma erogata: 290

somma -->  40
banconote da 20: 2
Somma erogata: 40

somma -->  595
banconote da 50: 11
banconote da 20: 2
Somma erogata: 590

somma -->  48
banconote da 20: 2
Somma erogata: 40


# 12) 
Ripetere gli esercizi 8 e 9 usando il costrutto switch (selezione multipla)

    switch (op) 
    {
      case '+': printf("%d\n", a+b);
      break;
      case '-': printf("%d\n", a-b);
      break;
      case '*': printf("%d\n", a*b);
      break;
      case '/': printf("%d\n", a/b);
      break;
      default: printf("operatore inesistente\n");
    }

# 13) 
Scrivere un programma che legge da tastiera un mese espresso come numero (da 1 a 12), e restituisce il numero di giorni in quel mese. 

Utilizzare il costrutto switch aggregando i casi con lo stesso esito:

    switch (mese) 
    {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12: printf("31\n");
      break;
      case 4:
      case 6:
      case 9:
      case 11: printf("30\n");
      break;
      case 2: printf("28\n");
      break;
      default: printf("mese inesistente\n");
    }