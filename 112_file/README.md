# 1)

Una funzione che

- riceve in ingresso una stringa, la sua lunghezza, il nome di un file.
- apre il file con quel nome.
- scrive su file la prima metà della stringa.

Esempio: 
    
    stringa: hE$llo.44 ---> file: hE$l

- chiude il file.
- non restituisce niente.

# 2)

Una funzione che

- riceve in ingresso una matrice quadrata di tipo intero, la sua dimensione, il nome di un file.
- tenta di aprire il file con quel nome.
- se il file esiste allora copia nella matrice i numeri positivi e pari presenti nel file fino a
riempire completamente la matrice. 

    Quindi chiude il file.


Esempio: 
        
        file: 30 3 52 1 7 14 2 33 76 -2 98 4 -4 2 8 9 25 -10 88 ...
        dimensione: 3
        matrice: 30 52 14
                 2  76 98
                 4  2  8

- restituisce 1 se la matrice è stata caricata. 

    Altrimenti restituisce 0.

# 3)

Una funzione che 
- riceve in ingresso un vettore di stringhe e il nome di un file.
- tenta di aprire il file con quel nome.
- se il file non esiste restituisce -1.
- se il file esiste copia dal file al vettore le stringhe che contengono almeno 3 vocali minuscole.

Esempio: 
        
        file: Alessandria Asti Novara Vercelli Torino Como Milano  
        vettore: Alessandria Novara Vercelli Torino Milano

- chiude il file.
- restituisce il numero di stringhe copiate nel vettore.

# 4)

Una funzione che 
- riceve in ingresso un vettore di interi (v), il nome di un file, e un valore intero (x).
- tenta di aprire il file con quel nome.
- se il file non esiste restituisce 0.
- Se il file esiste copia dal file al vettore i valori positivi e multipli di x.
- mette il valore -1 come “tappo” del vettore.

Esempio: 
        
        file: -3 2 3 7 -6 5 15 27 30 6 18 8 21 
        
        x: 3 
        
        ---> v: 3 15 27 30 6 18 21

- chiude il file.
- restituisce 1.


