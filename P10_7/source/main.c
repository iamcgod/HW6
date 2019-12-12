#include<stdio.h>
#include<stdlib.h>

typedef struct _card{
	char* face;
	char* suit;
}card;

int main() {
	 card aCard;
	 card* cardPtr;
	
	aCard.face = "Ace";
	aCard.suit = "Spades";

	cardPtr = &aCard;

	printf( "%s %s %s\n\n"
			"%s %s %s\n\n"
			"%s %s %s\n\n",
			aCard.face,"of",aCard.suit,
			cardPtr->face,"of",cardPtr->suit,
			(*cardPtr).face,"of",(*cardPtr).suit);

	system("pause");
	return 0;

}

