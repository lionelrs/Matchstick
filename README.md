# Matchstick
Epitech Project, matchstick

Subject:

This project is based on a very famous game based on matchsticks.
There is a certain number of matchstick lines.
The two players take turns; each player can, on a same line, take one or several matchsticks.
The losing player is the one to take the last matchstick.

Usage:

Compile it with `<make>` and launch the programm with `<./matchstick $SIZEOFMAP $MAXMATCHESPERTURN>`

# Examples

```
∼/B-CPE-200> ./matchstick 4 5
*********
*   |   *
*  |||  *
* ||||| *
*|||||||*
*********

Your turn:
Line: 4
Matches: 2
Player removed 2 match(es) from line 4
*********
*   |   *
*  |||  *
* ||||| *
*|||||  *
*********

AI's turn...
AI removed 2 match(es) from line 3
*********
*   |   *
*  |||  *
* |||   *
*|||||  *
*********

Your turn:
Line: 1
Matches: 1
Player removed 1 match(es) from line 1
*********
*       *
*  |||  *
* |||   *
*|||||  *
*********

AI's turn...
AI removed 1 match(es) from line 2
*********
*       *
*  ||   *
* |||   *
*|||||  *
*********

Your turn:
Line: 12
Error: this line is out of range
Line: 2
Matches: 2
Player removed 2 match(es) from line 2
*********
*       *
*       *
* |||   *
*|||||  *
*********

AI's turn...
AI removed 2 match(es) from line 4
*********
*       *
*       *
* |||   *
*|||    *
*********

Your turn:
Line: 4
Matches: 7
Error: you cannot remove more than 5 matches per turn
Line: 3
Matches: 1
Player removed 1 match(es) from line 3
*********
*       *
*       *
* ||    *
*|||    *
*********

AI's turn...
AI removed 2 match(es) from line 3
*********
*       *
*       *
*       *
*|||    *
*********

Your turn:
Line: 4
Matches: 2
Player removed 2 match(es) from line 4
*********
*       *
*       *
*       *
*|      *
*********

AI's turn...
AI removed 1 match(es) from line 4
*********
*       *
*       *
*       *
*       *
*********
I lost... snif... but I'll get you next time!!

∼/B-CPE-200> echo $?
1
```

```
∼/B-CPE-200> ./matchstick 2 10
*****
* | *
*|||*
*****

Your turn:
Line: 1
Matches: 1
Player removed 1 match(es) from line 1
*****
*   *
*|||*
*****

AI's turn...
AI removed 2 match(es) from line 2
*****
*   *
*|  *
*****

Your turn:
Line: 2
Matches: 1
Player removed 1 match(es) from line 2
*****
*   *
*   *
*****
You lost, too bad...

∼/B-CPE-200> echo $?
2
```

```
∼/B-CPE-200> ./matchstick 2 5
*****
* | *
*|||*
*****

Your turn:
Line: 0
Error: this line is out of range
Line: %

∼/B-CPE-200> echo $?
0
# In the previous example, the last input was an EOF (you can simulate it with the keyboard combination ctrl+d).
```

```
∼/B-CPE-200> ./matchstick 2 5
*****
* | *
*|||*
*****

Your turn:
Line: aze
Error: invalid input (positive number expected)
Line: 2

...

*****
* | *
*|  *
*****

Your turn:
Line: 1
Matches: 0
Error: you have to remove at least one match
Line: 1
Matches: aze
Error: invalid input (positive number expected)
Line: 1
Matches: 3
Error: not enough matches on this line
```

## Authorized functions

- read, write, malloc, free, time, getpid, random, srandom
