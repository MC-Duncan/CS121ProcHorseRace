



void advance(int hn, int* horses){
	int turn = dist(rd);
	horses[hn] += turn;
}

void printLane(int hn, int* horses){
	for (int pos = 0; pos < RACE_LENGTH; pos++){
		if (horses[hn] == pos){

