# High-Tech-Chess Project (In Progress)
###### {Polytech Montpellier Third year Project}

Second project of the year, currently in progress and the biggest project I've worked for !

## Introduction

Chess is a game that transcends time. That's why we wanted to innovate by using modern technologies to make the game experience more futuristic. 

What if I tell you that it's possible to play chess from a distance while physically moving pawns. This is currently our goal by making an automatic mechanism which takes in input the XY coordinates and then move the pawn.

here's how the game would be played :

   - The 1st player move his pawn and the system copy the movement in the 2nd player's chessboard.
     
   - After the movement being done, it's the 2nd player's turn, doing the same thing as the 1st player.

## Visuel
![Project Sketch](/DOC/screenshots/chessboard1.jpg?raw=true "Project Sketch")


## More technically


### Board mechanism

For chess pieces, we have pieces with a magnetic disk at the base, easily found in supermarkets or on the Internet. We decided to use this feature and move them with an electromagnet by using electromagnetic force.

So we're going to use a mechanical system that moves along the carthesian plane. We're thinking in terms of a system using stepper motors, pulleys and timing belts, in the same way as CNC systems.

![board Sketch](/DOC/screenshots/chessboard_mechanism.png?raw=true "Project Sketch")


As someone who really likes projects needing at the same time elctronics, IT and mechanics (i.e. Mecatronic), I'm very excited to see the final result !


### Pawns detections

We have several tools and ways to detect the presence of the pawn but our first idea is to use Hall effect sensors which detects the presence of the pawn thanks to theirs base's magnet disk.

### The Microcontroller

To control all of this stuff, it'll be necessary to use a Microcontroller. We first thought of using an Arduino but we would like to change of µC because most of our last projects were including an Arduino, we want to discover something else. 

As we're learning a lot about the nucleo board from STM in our µC class, we would like to use it at the end of our project. But we need to be effective because we have a time constraint, so we decided to temporarily use the Arduino board for the tests.


## Features

At the end of our project, the High Tech Chess board will be able of :

- Determine the position of the pieces to be moved.
- From the start and finish coordinates, find the shortest path, avoiding the other pieces.
- Move eliminated pieces to one side of the board.
- Send and receive data over a network for remote play.
- Report all movements using a graphical interface.

**Stay tuned for further project updates !**
