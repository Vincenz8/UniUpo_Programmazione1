# 1) Media

Scrivere una funzione che ha in input un vettore con tappo
e ne determina la media. 

La funzione deve restituire la media in formato float.

Esempio:

dato

    v[0] = 1, v[1] = 5, v[2] = 6,
    v[3] = 8, v[4] = -1

allora media = (1 + 5 + 8 ) / 3

# 2) Massimo e minimo

Scrivere una funzione che ha in input un vettore con tappo e determina massimo e minimo. 

La funzione non restituisce valori (void) ma deve salvare i valori di massimo e minimo in due variabili ricevute per riferimento.

Esempio:

dato

    v[0] = 1, v[1] = 5, v[2] = 6,
    v[3] = 8, v[4] = -1

allora max = 8 e min = 1

# 3) Conta maggiori di x

Scrivere una funzione che ha in input un vettore con tappo e un parametro x.

La funzione deve restituire la quantità di elementi del vettore strettamente maggiori di x.

Esempio:

dato

    v[0] = 1, v[1] = 5, v[2] = 6,
    v[3] = 8, v[4] = -1

se x = 7 allora risultato = 1

# 4) Conta occorrenze di x

Scrivere una funzione che ha in input un vettore con tappo, un valore x e restituisce il numero di volte un cui il valore x si ripete nel vettore.

Esempio:

dato

    v[0] = 1, v[1] = 3, v[2] = 4,
    v[3] = 5, v[4] = 5, v[5] = -1

se x = 5 allora conteggio = 2.

# 5) Posizione K-esima occorrenza di x

Scrivere una funzione che ha in input un vettore con tappo, un valore x un
valore k e restituisce l'eventuale posizione della k-esima occorrenza di x nel
vettore, -1 altrimenti.

Esempio:

dato

    v[0] = 1, v[1] = 3, v[2] = 4,
    v[3] = 5, v[4] = 5, v[5] = -1

- se x = 5 e k = 2
- allora posizione = 4 (il 5 si ripete per la seconda volta in posizione 4).
- se x = 4 e k = 2
- allora posizione = -1 (il 4 si ripete solo una volta, non due).
- se x = 3 e k = 1
- allora posizione = 1 (il 2 si ripete solo una volta, in posizione 1).

# 6) Somma precedenti

Scrivere una funzione che ha in input un vettore con tappo e restituisce il numero di elementi che sono la somma dei due precedenti.

Esempio:

dato

    v[0] = 1, v[1] = 3, v[2] = 4,
    v[3] = 5, v[4] = 5, v[5] = -1

allora conteggio = 1 (perché nella posizione 2 c'è 4 che è la somma della posizione 0 e 1 ovvero 1 + 3).