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
      score += 1;
      switch (you) {
      case 'A':
        score += 3;
        break;
      case 'B':
        score += 0;
        break;
      case 'C':
        score += 6;
        break;
      }
    } else if (me == 'Y') {
      score += 2;
      switch (you) {
      case 'A':
        score += 6;
        break;
      case 'B':
        score += 3;
        break;
      case 'C':
        score += 0;
        break;
      }
    } else if (me == 'Z') {
      score += 3;
      switch (you) {
      case 'A':
        score += 0;
        break;
      case 'B':
        score += 6;
        break;
      case 'C':
        score += 3;
        break;
      }
    }
  }
  cout << score;

  return 0;
}
