# homework1 
Questo file è contenuto in homework1 ed è distribuito in base ai termini di GNU Lesser General Public License (Lesser GPL)<br>

Soluzione adottata per risolvere l'homework1:<br>
Il sistema prevede tre nodi:<br>
-Un nodo invia il comando per visualizzare il messaggio.<br>
-Un nodo invia l'intero messaggio.<br>
-Un nodo che stampa il risultato della scelta ed è iscritto a due topic.<br>

Sono stati creati tre file .cpp per svolgere i vari compiti:<br>
-menu.cpp contiene il menu, <br>
-messaggio.cpp contiene l'intero messaggio, <br>
-msg_scelto.cpp visualizza il messaggio selezionato.<br>
I nodi comunicano con messaggi standard String.<br>

Inoltre, è stato creato un file .launch (homework1.launch) per eseguire il programma.<br>

-Su un terminale viene pubblicato 1 volta al secondo un messaggio contenente un nome, una età, e un corso di laurea (es: nome= mario rossi; eta'= 25; corso= informatica;).<br>
-Su un altro terminale viene visualizzato un piccolo menu dove l'utente deve selezionare da tastiera una delle opzioni per decidere quale parte del messaggio vedere. <br>
-Su un altro terminale è mostrata a video la parte del messaggio selezionata (in base alla scelta fatta dal menu).<br>



