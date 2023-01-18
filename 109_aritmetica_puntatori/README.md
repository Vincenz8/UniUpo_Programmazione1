# 1)

Scrivere un programma che permetta di inserire due vettori di interi lunghi N e stampi un terzo vettore i cui elementi sono la somma degli elementi dei due vettori in input. 

Dopodiche' stampa la media del terzo vettore. 


Esempio:

    v1: 1  3  5  7
    +
    v2: 2  4  6  8
    --------------
    v3: 3  7 11 15

Il programma utilizza queste funzioni:
- inserisci elementi nel vettore
- calcola vettore somma
- stampa vettore
- calcola media (con la parte decimale)

Le funzioni devono ricevere il vettore in ingresso nel formato int* e devono usare l'aritmetica dei puntatori.

# 2)

Scrivere un programma composto da queste funzioni:

- carica una matrice di numeri pseudo-casuali composti da una cifra;
- visualizza la matrice;
- cerca x (inserito dall'utente) visitando la matrice riga per riga e "restituisce" gli indici della riga e della colonna della prima occorrenza di x (-1, -1 se assente);

Le funzioni devono ricevere la matrice in ingresso nel formato int(*)[C] e devono usare l'aritmetica dei puntatori.

# 3)

Scrivere un programma composto da queste funzioni:

- chiede all'utente di inserire i valori della prima riga di una matrice; 
- carica automaticamente le altre righe in modo che i valori su una riga siano i successivi dei valori sulla riga precedente;
- visualizza la matrice.

Esempio:

    3	2	5
    4	3	6
    5	4	7

Le funzioni devono ricevere la matrice in ingresso nel formato int* e devono usare l'aritmetica dei puntatori.

# 4)

Scrivere una funzione che

- riceve in ingresso un vettore di qualunque tipo, la dimensione del tipo, il numero di elementi nel vettore e un indice;
- se l'indice non e' compatibile il numero di elementi, restituisce NULL;
- altrimenti restituisce l'indirizzo dell'elemento con tale indice. 

Testare la funzione con vettori di tipi diversi (int, float, ecc.). 

Verificare che l'indirizzo restituito sia corretto.

# 5)

Scrivere un programma composto da queste funzioni:

- (main) compone una "matrice" tramite l'unione di vettori di interi, della stessa lunghezza;
- visualizza la matrice tramite una funzione dedicata;
- calcola e "restituisce" il valore minimo e il valore massimo della matrice, tramite la stessa funzione.

Le funzioni devono ricevere la matrice in ingresso nel formato int** e devono usare l'aritmetica dei puntatori.