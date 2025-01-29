#include <iostream>

void printLane(int horseNum, int* horses);

int main(){

    int horses[] = {0,1,2,3,4};
    
    for (int i = 0; i < 5; i++){
        printLane(i, horses);
    } // end for

   return(0);
} // end main

void printLane(int horseNum, int* horses){

    char track[15];
    for (int i = 0; i < 14; i++){
        track[i] = '-';
        } // end for

    track[horses[horseNum]] = '0' + horseNum;
    std::cout << track << std::endl;
} // end printLan

