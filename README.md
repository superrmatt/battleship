# battleship
Old project from a few years ago, uploading now, might have a few bugs, I will get around to fixing soon. For now, consider it a work in progress.
At this point, the way the program is structured, is you enter your shots into shots.txt and position of the ships (their default starting values are below).
The program will cycle through the shots and determine if/when a ship is sunk.

Will work on updating this soon to have it more user interactive and capable of supporting two players.

You will be playing "Battleship". 

The main objective is to read integer values from the file shots.txt and from there determine if the shot hit any of your 5 ships.

The sentinel value is determined by the constant END. 

The way you determine if a boat was hit is if the shot was within the range of any of your boats.

Carrier can withstand 5 shots.
Range: 520 - 750

Battleship can withstand 4 shots.
Range: 400 - 510

Submarine can withstand 3 shots.
Range: 760 - 850

Destroyer can withstand 3 shots.
Range: 300 - 390

Patrol can withstand 2 shots.
Range: 100 - 140

Use: 
    g++ -std=c++11 battleship.cpp -o battleship
    to compile
