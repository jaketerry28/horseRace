# horseRace
Procedural Horse Racing

Overview
You will create a horse-race game in C++.  The main purpose of this project is to explore the C++ programming language and build a project using a procedural style of programming (Later, we will re-write this project in another style: object-oriented.)

The general idea is this.  You have 5 horses named 9 (with great creativity) 0 through four.  The horses are all on a track that is 15 characters long.

On each turn, each horse flips a coin.  (No, I don't know exactly how a horse would do this, but go with me here.)  If the horse gets 'heads,' it advances one space, and for 'tails' it stays in the same spot. 

The user presses the "Enter" key to get the next turn, and the race proceeds until one or more of the horses has finished the race.

Sample output
A run of the program could look like this:

```
0..............
.1.............
2..............
.3.............
4..............
Press enter for another turn
.0.............
.1.............
.2.............
.3.............
4..............
Press enter for another turn
..0............
.1.............
..2............
..3............
4..............
Press enter for another turn
...0...........
..1............
...2...........
...3...........
4..............
Press enter for another turn
....0..........
..1............
....2..........
....3..........
.4.............
Press enter for another turn
....0..........
...1...........
....2..........
.....3.........
.4.............
Press enter for another turn
....0..........
...1...........
....2..........
.....3.........
.4.............
Press enter for another turn
.....0.........
...1...........
.....2.........
......3........
.4.............
Press enter for another turn
.....0.........
....1..........
......2........
.......3.......
.4.............
Press enter for another turn
......0........
.....1.........
......2........
........3......
.4.............
Press enter for another turn
......0........
.....1.........
.......2.......
........3......
..4............
Press enter for another turn
......0........
.....1.........
.......2.......
........3......
..4............
Press enter for another turn
.......0.......
......1........
........2......
........3......
...4...........
Press enter for another turn
........0......
.......1.......
........2......
........3......
...4...........
Press enter for another turn
........0......
.......1.......
.........2.....
.........3.....
...4...........
Press enter for another turn
.........0.....
........1......
.........2.....
.........3.....
....4..........
Press enter for another turn
..........0....
.........1.....
.........2.....
.........3.....
.....4.........
Press enter for another turn
...........0...
.........1.....
.........2.....
..........3....
.....4.........
Press enter for another turn
...........0...
.........1.....
.........2.....
..........3....
......4........
Press enter for another turn
............0..
..........1....
.........2.....
...........3...
.......4.......
Press enter for another turn
.............0.
..........1....
.........2.....
...........3...
........4......
Press enter for another turn
..............0
...........1...
.........2.....
...........3...
........4......
Press enter for another turn
...............
Horse 0 WINS!!!
............1..
.........2.....
............3..
........4......
Press enter for another turn
```

## Fuctions

**void advance(int horseNum, int\* horses);**

```

function advance (int number, int* ptr)
	initialize integer coin variable
	create random generator
	create distributor from 0 to 1
	for each horse in array:
		horse position += coin distributor

```

**void printLane(int horseNum, int\* horses);**

```
track is initally an array of 15 "-" char
function printLane(int horseNum, int* horses)
    for each horse:
        get horse[horseNum] position
        update position on track
        print out track
        
```

**bool isWinner(int horseNum, int\* horses);**

```

constant TRACKLENGTH is max size of track length 15 char
function isWinner(int horseNum, int* horses)
	return true if position of horseNum is  >= TRACKLENGTH

```

