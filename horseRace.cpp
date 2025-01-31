//horseRace.cpp
//procedural horse racing

#include <iostream>
#include <random>

const int TRACKLENGTH = 15;
const int RACERS = 5;

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

// intialize horses
int horses[] = {0, 0, 0, 0, 0};

// keep going
bool winner = false;

int main(){
    
   	while (!winner){
        std::cout << "Press enter to continue..." << std::endl;
        std::cin.get();

     		for (int i = 0; i < RACERS; i++){
			printLane(i, horses);
			advance(i, horses);

			if (isWinner(i, horses)){
                		winner = true;
            		} // end if

 		} // end for

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
    if (horses[horseNum] >= TRACKLENGTH){
        int winningLane = horseNum;
        std::cout << "Horse " << horseNum <<" WINS!!!" << std::endl;
        return true;
    } // end for
    else{
        return false;
    } // end else;
} // end isWinner

void printLane(int horseNum, int* horses){
    char track[] = "--------------";
    for (int i = 0; i < TRACKLENGTH; i++){
        track[i] = '-';
        } // end for
    track[horses[horseNum]] = '0' + horseNum;
    std::cout << track << std::endl;
} // end printLane


