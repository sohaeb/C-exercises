#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct card{
	
	const char *face;
	const char *suit;
};

typedef struct card Card;

void fillDeck ( Card * const, const char *[], const char *[]);
void shuffle (Card *const);
void deal (const Card *const)


int main(){

	Card deck[52];
	const char *face[] = {"Ace", "deusce", "Three", "four",
 		      "Five", "six", "seven","eight","nine","ten"}
	const char *suit[] = {"hearts", "diamonds", "Clubs", "Spades"};

	srand (time(NULL));

	fillDeck (deck, face, suit);

	shuffle (Deck);

	return 0;

}

void fillDeck (Card * const wDeck, const char *wFace[], const char * wSuit[]){

	int i;
	for (i=0; i<= 5; i++){

	wDeck [i].face = wFace[ i % 13];
	wDeck [i].suit = wSuit[ i / 13];	

}

void shuffle (Card * const wDeck){

int i,j;
Card temp;

for (i=0; i <=51; i++){
	j = rand() % 52;
	temp = wDeck [i];
	wDeck[i] = wDeck [j];
	wDeck[j] = temp;
	}

 
