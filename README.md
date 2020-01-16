# battleship
Old project from a few years ago, uploading now, might have a few bugs, I will get around to fixing soon. For now, consider it a work in progress.

You will be playing "Battleship". 

So the main objective is to read integer values from the file ********
   shots.txt and from there determine if the shot hit any of your 5 ships. *******

The sentinel value is determined by the constant END. 

The way you determine if a boat was hit is if the shot was within the range *******
    of any of your boats. ********

Carrier can withstand 5 shots.*******
Range: 520 - 750*******

Battleship can withstand 4 shots.*******
Range: 400 - 510*******

Submarine can withstand 3 shots.*******
Range: 760 - 850*******

Destroyer can withstand 3 shots.*******
Range: 300 - 390*******

Patrol can withstand 2 shots.*******
Range: 100 - 140*******

If any boat has been destroyed, then you must output to the screen *******
    that the ship has sank. 

As well output the hits on each boat to a file hits.txt. *****
     Note that to cast an int to a string, use the function to_string(a).*****

Use 
    g++ -std=c++11 battleship.cpp -o battleship
    to compile your program.

Please do not change any values in shots.txt.
