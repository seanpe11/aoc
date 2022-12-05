#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

// simple stack solution
// read input into stacks, then just follow operations as stacks

int main(void) {
  char you, me;
  int score = 0;

  while (scanf("%c %c\n", &you, &me) == 2) {
    if (me == 'X') {
      score += 0;
      switch (you) {
      case 'A':     // rock
        score += 3; // scissors
        break;
      case 'B':     // paper
        score += 1; // rock
        break;
      case 'C':     // scissors
        score += 2; // paper
        break;
      }
    } else if (me == 'Y') {
      score += 3;
      switch (you) {
      case 'A':     // rock
        score += 1; // rock
        break;
      case 'B':     // paper
        score += 2; // paper
        break;
      case 'C':     // scissors
        score += 3; // scissors
        break;
      }
    } else if (me == 'Z') {
      score += 6;
      switch (you) {
      case 'A':     // rock
        score += 2; // paper
        break;
      case 'B':     // paper
        score += 3; // scissors
        break;
      case 'C':     // scissors
        score += 1; // rock
        break;
      }
    }
  }
  cout << score;

  return 0;
}
