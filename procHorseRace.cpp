#include <iostream>
#include <cstdlib>
#include <ctime>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;

int main(){
	std::cout << "Horse race game " << std:: endl;
	srand(time(NULL));
	int horses[NUM_HORSES] = {0, 0, 0, 0, 0};
	bool keepGoing = true;

	while(keepGoing){
		for (int i = 0; i < NUM_HORSES; i++) {
			advance(i, horses);
			printLane(i, horses);
			if (isWinner(i, horses)) {
				keepGoing = false;
			} // end if
		} // end for loop

		if (keepGoing){
			std::cout << "Press ENTER for next turn";
			std::cin.ignore();
		} // end if
	} // end while
	return 0;
} // end main

void printLane(int horseNum, int* horses){
	for (int i = 0; i < TRACK_LENGTH; i ++){
		if (i == horses[horseNum]){
			std::cout << horseNum;
		} else {
		  std::cout << ".";
		} // end if
	} // end for loop
	// print a newline
	std::cout << std::endl;
} // end printLane

void advance(int horseNum, int* horses){
	int coin = rand() % 2;
	horses[horseNum] += coin;
} // end advance

bool isWinner(int horseNum, int* horses){
	bool result = false;
	if (horses[horseNum] >= TRACK_LENGTH){
		result = true;
		std::cout << "Horse " << horseNum << " is the winner" << std::endl;
	} // end if
	return result;
} // end isWinner
