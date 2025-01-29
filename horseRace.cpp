//horseRace.cpp
//procedural horse racing

#include <iostream>
#include <random>

const int TRACKLENGTH = 15;
const int RACERS = 5;

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);
void horsePos(int* horses);
int main(){
    
    // intialize horses
	int horses[] = {0, 0, 0, 0, 0};

	bool winner = false;

	int counter = 0;

	while (!winner){
		counter++;
		std::cout << "LOOP: " << counter << std::endl;
		for (int i = 0; i < RACERS; i++){
			//std::cout << horses[i] << std::endl;
			advance(i, horses);
			if (isWinner(i, horses)){
				std::cout << "winner is: " << i << std::endl;
				winner = true;
			return winner;
			} // end if
            printLane(i, horses);
		} // end for
		//horsePos(horses);
		//std::cout << std::endl;
	} // end while
	return(0);
} // end main

void advance(int horseNum, int* horses){
	int coin = -1;
	// random integer generator between 0 and 1
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);
	coin = dist(rd);

	horses[horseNum] += coin;
} // end advance

bool isWinner(int horseNum, int* horses){
	return horses[horseNum] >= TRACKLENGTH;
} // end isWinnerr


void printLane(int horseNum, int* horses){

    char track[16];
    for (int i = 0; i < TRACKLENGTH; i++){
        track[i] = '-';
        } // end for

    track[horses[horseNum]] = '0' + horseNum;
    std::cout << track << std::endl;
} // end printLane


void horsePos(int* horses){
	for (int i = 0; i < RACERS; i++){
		std::cout << horses[i] << " ";
	} // end for
} // end horsePos

