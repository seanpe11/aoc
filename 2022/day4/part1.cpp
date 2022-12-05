#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(void) {
  int aStart, aEnd, bStart, bEnd;
  vector<int> hello;
  int overlappingCount = 0;

  int end = 4;
  while (end == 4) {
    end = scanf("%d-%d,%d-%d", &aStart, &aEnd, &bStart, &bEnd);
    if (aStart <= bStart && aEnd >= bEnd) {
      overlappingCount++;
    } else if (bStart <= aStart && bEnd >= aEnd) {
      overlappingCount++;
    }
  }

  // part 1
  cout << overlappingCount;

  return 0;
}
