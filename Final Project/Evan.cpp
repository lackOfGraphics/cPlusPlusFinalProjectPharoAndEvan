//Final Project Main 
//Authors: Evan J. Raker & Phero Luong
//Date: 10/8/2018






#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

string hand[7] = {};

string cardDeck[4][13] = { { "Ace of Spades", "2 of Spades", "3 of Spades", "4 of Spades", "5 of Spades", "6 of Spades", "7 of Spades", "8 of Spades", "9 of Spades", "10 of Spades", "Jack of Spades", "Queen of Spades", "King of Spades" },
{ "Ace of Clubs", "2 of Clubs", "3 of Clubs", "4 of Clubs", "5 of Clubs", "6 of Clubs", "7 of Clubs", "8 of Clubs", "9 of Clubs", "10 of Clubs", "Jack of Clubs", "Queen of Clubs", "King of Clubs" },
{ "Ace of Hearts", "2 of Hearts", "3 of Hearts", "4 of Hearts", "5 of Hearts", "6 of Hearts", "7 of Hearts", "8 of Hearts", "9 of Hearts", "10 of Hearts", "Jack of Hearts", "Queen of Hearts", "King of Hearts" },
{ "Ace of Diamonds", "2 of Diamonds", "3 of Diamonds", "4 of Diamonds", "5 of Diamonds", "6 of Diamonds", "7 of Diamonds", "8 of Diamonds", "9 of Diamonds", "10 of Diamonds", "Jack of Diamonds", "Queen of Diamonds", "King of Diamonds" } };


int main() {

	for (int i = 0; i < size(hand); i++) {
		int randSuit;
		int randRank;
		srand(time(NULL));
		randSuit = rand() % 4 + 1;
		randRank = rand() % 13 + 1;
		hand[i] = cardDeck[randSuit][randRank];
		cout << hand[i] << endl;
		randSuit = 0;
		randRank = 0;
		cardDeck[randSuit][randRank] = 0;
		sleep_for(seconds(1));

		if (hand[i])
	}

	system("pause");
	return 0;
}