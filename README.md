# CS121ProcHorseRace

# Algorithm for procedural horse race

# functions and setup

```
void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

constant int NUM_HORSES

```

# main()
```
  set up randomization
  set up horses array
  5 zeros

  set keepGoing to true
  while loop to manage entire game
  while keepGoing:
    go through all the horses (for loop)
    for each horse:
      advance that horse
      print a lane for that horse
      if that horse wins:
        set keepGoing to false
      prompt for next turn
```

# advance()
```
  given horseNum and horse array
  roll a zero or one -> coin
  add coin to that horse's position value
```

# printLane()
```
  given horseNum and horse array
  for loop from 0 to TRACK_LENGTH -> i
    if i == curent horse position:
      print horseNum
    otherwise:
      print a dot
```

# isWinner()
```
  given horseNum and horse array
  result = false
  if this horse's position += TRACK_LENGTH:
    result = true
    print horseNum is the winner
  return result
```














