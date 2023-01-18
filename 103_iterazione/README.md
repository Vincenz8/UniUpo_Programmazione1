# 1) 
Scrivere un programma che richieda in input una sequenza di n numeri interi e ne individui il massimo.

# 2) 
Scrivere un programma che richieda in input una sequenza di n numeri interi e ne individui i primi due massimi.

# 3) 
Realizzare un programma che calcoli la somma dei primi N numeri naturali, dove N e' un intero acquisito da tastiera.

Utilizzare prima il costrutto while, poi do-while, e poi for. 

# 4) 
Scrivere un programma che richieda in input una sequenza di interi conclusa da 0 e ne calcoli la somma.

# 5) 
Stampare tutti i numeri pari da 0 a 100.

# 6) 
Realizzare un programma che calcoli il prodotto di due interi x ed y acquisiti da tastiera,  usando solo la somma. 



# 7) 
Realizzare un programma che calcoli la potenza di x elevato alla n (con x ed n interi acquisiti da tastiera) usando solo il prodotto.

# 8) 
Scrivere un programma che legge n da tastiera e ne calcola il fattoriale (n!).

Esempio: 
- n=4   fatt(n)=1 * 2* 3 * 4=24
- n=1   fatt(n)=1
- n=0   fatt(n)=1

# 9) 
Scrivere un programma che legge da tastiera il valore di n,
legge da tastiera una sequenza di n interi, 
e  calcola i seguenti  valori:

- il minimo numero
- il massimo numero
- la somma n1 + n3 + n5 + ... (numeri in posizione dispari)
- la somma n2 + n4 + n6 + ... (numeri in posizione pari)
- la somma totale di tutti i numeri letti

## Esempi di esecuzione
--------------------

Se la sequenza in input e'

    10 2 20 5 6 1 40 1 30 

deve essere stampato

- min = 1
- max = 40
- somma dispari = 106
- somma pari = 9
- somma totale = 115

Se la sequenza in input e'

    4 -10 -30 50 100 25 -2 29 60 

deve essere stampato

- min = -30
- max = 100
- somma dispari = 132
- somma pari = 94
- somma totale = 226



# 10) 
Scrivere un programma che calcoli il MCD  di due interi acquisiti da tastiera, notando che:

se 
    
    a>b>0 MCD(a,b) = MCD(b, a-b).

In pratica,
1. se a=b MCD=a;
2. se a>b pongo a=a-b e itero;
3. se a<b pongo b=b-a e itero.

Realizzare l'iterazione con il costrutto while. 



# 11) 
Scrivere un programma che legge da tastiera un intero n maggiore di 0 e stampa n seguito da tutti i suoi divisori, come negli esempi.

Se n e' primo, stampa il messaggio "n e' un numero primo".

## Esempi di esecuzione
--------------------

Se n = 48 deve essere stampato

    48: 1 2 3 4 6 8 12 16 24 48

Se n = 1764 deve essere stampato

    1764: 1 2 3 4 6 7 9 12 14 18 21 28 36 42 49 63 84 98 126 147 196 252 294 441 588 882 1764

Se n = 1777 deve essere stampato

    1777: 1 1777
    1777 e' un numero primo



# 12) 
Stampare una serie di 200 simboli "+" e "-" alternati.

# 13) 
Scrivere un programma che legge da tastiera un intero n maggiore di 0 e stampa i numeri interi da 0 a n, quattro per riga.

Per incolonnare i numeri si puo' usare:
- il carattere TAB \t printf("%d\t", x);
- Assumendo che gli interi non abbiano piu' di sei cifre, 
usare la specifica di formato "%6d", che stampa un intero usando 6 caratteri:
    
    printf("%6d", x);

Se x e' uguale a 1234, x viene preceduto da due spazi, in modo da stampare complessivamente sei caratteri.

## Esempio di esecuzione
--------------------

Se n e' uguale a 14 deve essere stampato

     0     1     2     3
     4     5     6     7
     8     9    10    11
    12    13    14  



# 14) 
Scrivere un programma che legge da tastiera due interi righe e colonne
e stampa due tabelle delle dimensioni specificate e contenenti i numeri da 0 in avanti, fino al riempimento della tabella.

La prima tabella  e' riempita riga per riga, partendo dalla riga 0 (prima riga), la seconda tabella e' riempita  colonna per colonna partendo dalla colonna 0 (prima colonna), come negli esempi.

Si assume righe>0 e colonne>0.

Notare che, in entrambi i casi, le tabelle vanno stampate riga per riga. 
Usare un ciclo della forma

    for( r = 0 ;  ....  ){
    // stampa la riga r 
    for( c = 0 ; ....  ){ 
        // stampa numero alla riga r e colonna c    
        printf("%6d", EXPR);
        ...
    }
    }

dove EXPR e' una opportuna espressione aritmetica.


Esempi di esecuzione
--------------------

Se righe = 4 e colonne = 8 deve essere stampato

     0     1     2     3     4     5     6     7
     8     9    10    11    12    13    14    15
    16    17    18    19    20    21    22    23
    24    25    26    27    28    29    30    31


     0     4     8    12    16    20    24    28
     1     5     9    13    17    21    25    29
     2     6    10    14    18    22    26    30
     3     7    11    15    19    23    27    31

Notare che le due tabelle hanno 4 righe e 8 colonne e che contengono i 
numeri da 0 a 31 (in tutto 32 numeri). 


Se righe = 12 e colonne = 15 deve essere stampato

![tabella1](Tabella1.png)


# 15) 
Chiesti in input i valori di r e di c, stampare a video un rettangolo (o quadrato se r=c) di r righe e c colonne di caratteri X.

es. r=3 c=5
	
    XXXXX
	XXXXX
	XXXXX



# 16) 
Scrivere un programma che stampi la tavola pitagorica per valori da 1 a 10



# 17) 
Realizzare un programma che stampi a video un rettangolo la cui cornice sia composta da asterischi * e il suo contenuto da caratteri ‘A’, come nell’esempio:

    ********************
    *AAAAAAAAAAAAAAAAAA*
    *AAAAAAAAAAAAAAAAAA*
    *AAAAAAAAAAAAAAAAAA*
    ********************

Il numero di colonne e di righe deve essere chiesto in input all’utente a tempo di esecuzione, entrambi devono essere maggiori di 1.

## Esempi di esecuzione
--------------------

Se colonne (base) = 7 e righe (altezza) = 4 deve essere stampato

    *******
    *AAAAA*
    *AAAAA*
    *******

Se colonne (base) = 35 e righe (altezza) = 8 deve essere stampato

    ***********************************
    *AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*
    *AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*
    *AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*
    *AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*
    *AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*
    *AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*
    ***********************************



# 18) 
Scrivere un programma che legge un intero n maggiore di 1 e genera una tabella di n righe e n colonne in cui:
- la diagonale e' composta da 0
- la parte sopra la diagonale e' composta X
- la parte sotto la diagonale e' composta da Y

Esempio:    n=4

    0 X X X
    Y 0 X X
    Y Y 0 X
    Y Y Y 0

Sulla diagonale, il numero della riga coincide con il numero della colonna. 

Sopra la diagonale, il numero della colonna e' maggiore del numero della riga. 

Sotto la diagonale, il numero della colonna e' minore del numero della riga.