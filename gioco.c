#include <stdio.h>

void print_menu();
int gioca_partita();

int main(){
int partita=0;
char scelta= {'\0'};
print_menu();
scanf("%c", &scelta);

if(scelta == 'B'){
printf("Arrivederci\n");
return 0;    
}

while (scelta == 'A'){
gioca_partita();
print_menu();
scanf(" %c", &scelta);

}

return 0;

}

void print_menu(){
printf("A > Inizia partita\nB > Esci\n");
printf("Inserisci A o B\n");
}

int gioca_partita(){
int punteggio= 0;
char nome[20]= {'\0'};
printf("Inserisci nome utente:\n");
scanf(" %s", nome);

char risposta1;
printf("Domanda 1:\nMischiando il rosso e il giallo che colore esce fuori?\n");
printf("A > Arancione\nB > Verde\nC > Rosso\n");
scanf(" %c", &risposta1);

if(risposta1 == 'A'){
punteggio++;    
}


char risposta2;
printf("Domanda 2:\nMischiando il blu e il rosso che colore esce fuori?\n");
printf("A > Rosa\nB > Viola\nC > Verde\n");
scanf(" %c", risposta2);

if(risposta2 == 'B'){
punteggio++;    
}


char risposta3;
printf("Domanda 3:\nMischiando il rosso, il verde e il blu che colore esce fuori?\n");
printf("A > Nero\nC > Bianco\nB > Marrone\n");
scanf(" %c", risposta3);

if(risposta3 == 'C'){
punteggio++;    
}

printf("Congratulazioni hai completato il gioco %s:%d\n", nome, punteggio);

return 0;
}