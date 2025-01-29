#include <iostream>

void addOneRef(int num, int* ptr);

int main(){

	int horse[] = {0,1,2,3,4};
	std::cout << "Before: " << std::endl;
	for (int i = 0; i < 5; i++){
		std::cout << horse[i] << std::endl;
	} // end for

	std::cout << "After " << std::endl;

	for (int i = 0; i < 5; i++){
		addOneRef(i, horse);
		std::cout << horse[i] << std::endl;
	} // end for

	return(0);
} // end main

void addOneRef(int num, int* ptr){
	ptr[num] += 1;
} // end addOneRef
