//horseRace.cpp
//procedural horse racing

#include <iostream>
#include <random>

const int TRACKLENGTH = 15;
const int RACERS = 5;

void advance(int* horses);
//void printLane(int horseNum, int* horses);
//bool isWinner(int horseNum, int* horses);

int main(){
	
	int horses[] = {0, 0, 0, 0, 0};
	std::cout << "Before: " <<  &horses << std::endl;
	for (int i = 0; i < RACERS; i++){
		std::cout << i << std::endl;
	} // end for

	advance(horses);
	
	std::cout << "After: " << horses << std::endl;
	for (int i = 0; i < RACERS; i++){
		std::cout << i << std::endl;
	} // end for
	return(0);
} // end main

void advance(int* horses){
	int coin = -1;
	// random integer generator between 0 and 1
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);

	for (int i = 0; i < RACERS; i++){
		coin = dist(rd);
		&horses[i] += coin;
	} // end for
} // end advance
