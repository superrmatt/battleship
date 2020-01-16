#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <queue>

using namespace std;

void carrierFunc();
void battleshipFunc();
void submarineFunc();
void destroyerFunc();
void patrolFunc();
bool checkAllSunk();
void populateQueue();
void endGame();


const int END = -1;

int carrier = 0; //5
int cRemain = 5; //how many shots left to sink

int battleship = 0; //4
int bRemain = 4; // how many left

int submarine = 0; //3
int sRemain = 3; //how many left

int destroyer = 0; //3
int dRemain = 3; //how many left

int patrol = 0; //2
int pRemain = 2; // how many left

int coordinate = 0; //2

bool sunkShips[5] = {false}; //[carrier, battleship, submarine, destroyer, patrol] false = active, true = sunk
