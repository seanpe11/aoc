#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(void) {
  int floor = 0;
  int moveCount = 0;
  char move;

  while (scanf("%c", &move) == 1) {
    if (move == '(') {
      floor++;
    } else if (move == ')') {
      floor--;
    }
    moveCount++;
    if (floor == -1) {
      cout << moveCount << endl;
    }
  }

  cout << floor;

  return 0;
}
