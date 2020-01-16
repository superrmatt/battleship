/* @author: Matt Dambra*/
#include "header.h"

queue<int> coordinates;

int main(){		
	cout << "Welcome Commander, to battleship!\nThe goal is to sink all of the 5";
	cout << " enemy ships.\nSimply enter the coordinate values to launch an attack";
	cout << " and hope to hit a ship!\nHappy Hunting!" << endl;
	cout << "to exit type '-1'" << endl; 
	
	populateQueue();
	while(coordinate != END || checkAllSunk() != true){ 	
		
		coordinate = coordinates.front();
		cout << "front = " << coordinate << endl;
		coordinates.pop();
		cout << "popped" << endl;
	
		if(100 <= coordinate && coordinate <= 850){
	
			if(520 <= coordinate && coordinate <= 750){
				carrierFunc();
			}
			if(400 <= coordinate && coordinate <= 510){
				battleshipFunc();
			}
			if(760 <= coordinate && coordinate <= 850){
				submarineFunc();
			}
			if(300 <= coordinate && coordinate <= 390){
				destroyerFunc();
			}
			if(100 <= coordinate && coordinate <= 140){
				patrolFunc();
			}
			
		}else{
			if(coordinate == -1){
				cout <<"Game Over" << endl;
				endGame();
				return 0;
			}else{
				cout << "Coordinates out of Range" << endl;
			}
		}

	}
	endGame();
	cout << "Congratulations!! You have sunk all ships, victory is yours, Commander!" << endl;
	return 0;
}

void populateQueue(){
	 ifstream infile("shots.txt");	
	string line = "";
	while (getline(infile, line)){
		istringstream iss(line);
		int a;
		cout << " a = " << a << endl;
		if(!(iss >> a)){
			break;
		}
		coordinates.push(a);
	}

}

void endGame(){
	ofstream myfile;
	myfile.open("hits.txt");
	myfile << "The Carrier has been hit " << carrier << " times" << endl;
	myfile << "The Battleship has been hit " << battleship << " times" << endl;
	myfile << "The Destroyer has been hit " << destroyer << " times" << endl;
	myfile << "The Submarine has been hit " << submarine << " times" << endl;
	myfile << "The Patrol Boat has been hit " << patrol << " times" << endl;

		
}

bool checkAllSunk(){
	for(int i = 0; i < sizeof(sunkShips); i++){
		if(sunkShips[i] == false){
			return false;
		}
	}
	return true;
}

void carrierFunc(){
	cout << "Carrier hit!" << endl;
	carrier++;
	cRemain--;
	if(carrier == 5){
        	cout << "The Carrier has been sunk!" << endl;
		sunkShips[0] = true;	
	}else{
                cout << "The carrier has been hit " << carrier << " times. " << cRemain << " shots left to sink the Carrier" << endl; 
	}
}

void battleshipFunc(){
	cout << "Battleship hit!" << endl;
	battleship ++;
	bRemain--;
	if(battleship == 4){
		sunkShips[1] = true;
		cout << "The Battleship has been sunk!" << endl;
	}else{
		cout << "The Battleship has been hit " << battleship << " times. " << bRemain << " shots left to sink the Battleship." << endl;
	}
}

void submarineFunc(){
	cout << "Submarine hit!" << endl;
	submarine ++;
	sRemain--;
	if(submarine == 3){
		cout << "The Submarine has been sunk!" << endl;
		sunkShips[2] = true;
	}else{
		cout << "The Submarine has been hit " << submarine << " times. " << sRemain << " shots left to sink the Submarine." << endl;
	}
}

void destroyerFunc(){
        cout << "Destroyer hit!" << endl;
        destroyer ++;
        dRemain--;
        if(destroyer == 3){
                cout << "The Destroyer has been sunk!" << endl;
		sunkShips[3] = true;
        }else{
                cout << "The Destroyer has been hit " << destroyer << " times. " << dRemain << " shots left to sink teh Submarine." << endl;
        }
}

void patrolFunc(){
        cout << "Patrol Boat hit!" << endl;
        patrol ++;
        pRemain--;
        if(patrol == 2){
                cout << "The Patrol Boat has been sunk!" << endl;
		sunkShips[4] = true;
        }else{
                cout << "The Patrol Boat has been hit " << patrol << " times. " << pRemain << " shots left to sink teh Submarine." << endl;
        }
}
