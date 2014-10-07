CS3520 - Programming in C++ - Final Project

Chris Kuffert
Sanders Lauture
Conor Golden
Jack Kelly
Arjun Rao

INTRODUCTION:
This is a game that I worked on as a member
of the team above. We had roughly 10 weeks
to build a game in C++ that had to display
sound memory usage and, simply put, work.
How fun the game proved to be was not a key
factor in the grading process.

We as a group faced some difficutly working
with the Cocos2D-X (http://www.cocos2d-x.org/)
library, particularly with setting up the
environment for all group members. The project
was a great expereince, and gave me a great
chance to learn about working with a team on
a project, as well as how important Git is
to know.

Note that this code will not work without the
Cocos2D-X lib that I removed, as the file
was far too large for this demonstration.


GAME DESCRIPTION
When the game is run, the first map will load,
with the player's units are in the bottom left
corner of the map. They can move the cursor
(which starts in the bottom left) with the WASD
keys, and select units with the space bar. Once
a Unit is selected, he can be moved by pressing
spacebar on another empty square. To attack
another enemy, select an enemy with the space bar,
and select an enemy by pressing space bar again.
This will have your unit attack the selected
enemy. This will kill the enemy, leaving them
stationary, while all the other enemies move
around. Once all the enemies are killed, the
game is over and the player wins.