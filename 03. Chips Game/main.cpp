#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
  /* 
  This variable keeps track of whose turn it is.
  When player1Turn is true, it's player 1's turn.
  When player1Turn is false, it's player 2's turn.
  */
  bool player1Turn = true;

  //determine when the game is done
  bool gameOver = false;

  int chipsInPile = 0;
  int chipsTaken = 0;

  //seed the random number generator
  srand(time(0));

  //start the game with a random number of chips in the pile
  chipsInPile = (rand() % 100) + 1;
  cout << "This round will start with " << chipsInPile << " chips in the pile.\n";
}
