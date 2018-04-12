# homework1 
Questo file è contenuto in homework1 ed è distribuito in base ai termini di GNU Lesser General Public License (Lesser GPL)

Soluzione adottata per risolvere l'homework1:
Il sistema prevede tre nodi:
-Un nodo invia il comando per visualizzare il messaggio.
-Un nodo invia l'intero messaggio.
-Un nodo che stampa il risultato della scelta ed è iscritto a due topic.

Sono stati creati tre file .cpp per svolgere i vari compiti:
-menu.cpp contiene il menu, 
-messaggio.cpp contiene l'intero messaggio, 
-msg_scelto.cpp visualizza il messaggio selezionato.
I nodi comunicano con messaggi standard String.

Inoltre, è stato creato un file .launch (homework1.launch) per eseguire il programma.

-Su un terminale viene pubblicato 1 volta al secondo un messaggio contenente un nome, una età, e un corso di laurea (es: nome= mario rossi; eta'= 25; corso= informatica;).
-Su un altro terminale viene visualizzato un piccolo menu dove l'utente deve selezionare da tastiera una delle opzioni per decidere quale parte del messaggio vedere. 
-Su un altro terminale è mostrata a video la parte del messaggio selezionata (in base alla scelta fatta dal menu).



