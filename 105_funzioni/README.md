# 1)
Scrivere un programma che, sfruttando le funzioni, permetta di calcolare l’area di un cerchio o di un quadrato. 

L’utente inserisce un numero,dichiarando se si tratta del raggio di un cerchio o del lato di un quadrato.

Se l’utente inserisce un numero negativo viene visualizzato un errore, altrimenti il sistema calcola l’area in modo appropriato.

# 2)
Scrivere un programma che permetta di inserire due vettori lunghi N e stampi un terzo vettore i cui elementi sono la somma degli elementi dei
due vettori in input. 

Il programma utilizza 3 funzioni:
- Inserisci elementi nel vettore
- Calcola somma
- Stampa vettore

# 3)
Scrivere un programma che calcola il fattoriale di un numero. 

Il programma conterrà una funzione denominata fatt, che calcola il fattoriale di un numero intero passato come parametro e che restituisce il risultato.

Si consiglia di utilizzare il tipo double per il valore di ritorno in quanto la funzione fattoriale cresce molto velocemente.

Il calcolo del fattoriale deve essere ottenuto in maniera iterativa (ciclo for o ciclo while).

    f att(N ) = 1 ∗ 2 ∗ 3 ∗ . . . ∗ (N )
    f att(0) = 1

# 4)
Scrivere un programma che, utilizzando le funzioni, calcoli la media, il massimo e il minimo di un array di numeri reali.

Utilizzare le funzioni:

- leggi(): permette di inserire il vettore di numeri
- media(): calcola e ritorna la media
- max(): calcola e ritorna il valore massimo
- min(): calcola e ritorna il valore minimo
- stampa(): visualizza il vettore, la media e il massimo e il minimo

# 5)
Si scriva un programma C che richiami tre funzioni:

- Inserimento degli elementi in un vettore
- Funzione cerca, che ricerchi la presenza di un elemento in un vettore di interi.

La funzione riceve in ingresso tre parametri:

- un vettore di interi v[] nel quale ricercare il valore;
- un un valore intero N che indica quanti elementi contiene il vettore;
- il valore intero x che deve essere ricercato.

La funzione deve restituire un valore intero, ed in particolare:

- se il valore x è presente nel vettore, allora la funzione restituisce
l’indice della posizione alla quale si trova tale valore;

- se il valore x è presente più volte, si restituisca l’indice della
prima occorrenza;

- se il valore x non è presente nel vettore, si restituisca -1.

# 6)
Creare un programma che permetta di cifrare e di decifrare una stringa (considerare solo caratteri minuscoli e senza spazi) attraverso l’algoritmo
di cifratura di Cesare.

Ogni lettera del testo in chiaro `e sostituita nel testo cifrato dalla lettera che si trova k posizioni dopo nell’alfabeto. 

Il numero k rappresenta la chiave (0 < k < 26). 

Per esempio, con 

    k = 3 : ’a’ diventa ’d’, ’m’ diventa ’p’, ’z’ diventa ’c’. 

La stringa si decripta eseguendo l’operazione inversa. 

Si scriva un programma che tramite apposite funzioni
permetta di:
- inserire la stringa
- criptare la stringa
- decriptarla
- stampare la stringa

# 7)
Scrivere un programma in linguaggio C che esegue la fusione di due vettori di interi ordinati in modo crescente. 

Il programma attraverso apposite funzioni deve eseguire le seguenti operazioni:

- leggere due vettori di N interi. 

  Il numero N viene inserito dall’utente ed `e minore di 20. 
  
  I due vettori possono avere lunghezza diversa. 
  
  I due vettori si suppongono gi`a ordinati in maniera crescente.
  
- creare un terzo vettore di lunghezza pari alla somma delle lunghezze dei due vettori dati. 

  Il vettore dovrà contenere i numeri contenuti nei due vettori di partenza. 
  
  I numeri nel vettore devono essere ordinati in modo crescente.
  
- stampare il vettore generato.

Ad esempio, si assuma che siano stati inseriti i due vettori

    1 6 15 20 25
    2 8 18 19.
    
Il programma dovrà visualizzare la sequenza 

    1 2 6 8 15 18 19 20 25
